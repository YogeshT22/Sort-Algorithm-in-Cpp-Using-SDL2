#include <iostream>
#include <SDL.h>
#include <random>
#include <ranges>
#include <algorithm>

void draw_state(
	std::vector<int> const & v,
	SDL_Renderer* renderer,
	unsigned int red,
	unsigned blue)
{
	int index = 0;
	for (int i : v)
	{
		if (index == red)
			SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
		else if (index == blue)
			SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
		else
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		SDL_RenderDrawLine(renderer, index, 99, index, i);
		index += 1;
	}
}

int main(int argc, char* argv[])
{
	std::random_device rd;
	std::uniform_int_distribution d(1, 99);
	std::vector<int> v;
	for (int i = 0; i < 100; i++)
	{
		v.push_back(d(rd));
	}
	
	//SDL code.

	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;
	SDL_CreateWindowAndRenderer(
		50 * 10, 50 * 10, 0,
		&window, &renderer);
	SDL_RenderSetScale(renderer, 5, 5);



	// sort algorithm.

	for (unsigned int i = 0; i < v.size(); i++)
	{
		for (unsigned int j = i; j < v.size(); j++)
		{
			if (v[j] < v[i])
			{
				std::swap(v[j], v[i]);
			}

			// clear screen

			SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
			SDL_RenderClear(renderer);

			draw_state(v, renderer, i, j);

			// Show to window!

			SDL_RenderPresent(renderer);
			SDL_Delay(2);
		}

	}
	for (int i : v)
	{
		std::cout << i << " ";
	}
	if (std::ranges::is_sorted(v))
	{
		std::cout << "\nsorted\n";
	}
	return 0;

}