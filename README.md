# 📊 Sorting Algorithm Visualizer in C++ with SDL2

A C++ application that visually demonstrates sorting algorithms using the SDL2 graphics library. This project offers an interactive way to understand how different sorting algorithms operate through real-time visualizations.

## 🎥 Preview

<img src="src.jpg" alt="Sorting Visualizer Preview" width="500">

## 🚀 Features

- Visualizes sorting algorithms such as:
  - Bubble Sort
  - Insertion Sort
  - Selection Sort
- Real-time graphical representation of sorting processes.
- Adjustable visualization speed for better understanding.
- Interactive controls to start, pause, and reset the visualization.

## 🛠️ Requirements

- **C++ Compiler**: Support for C++11 or higher.
- **SDL2 Library**: Ensure SDL2 is installed and properly configured.

### Installing SDL2

Follow these steps to set up SDL2:

1. **Download SDL2**: Get the development libraries from the [official SDL website](https://www.libsdl.org/download-2.0.php).
2. **Set Up in Your Project**:
   - Include the SDL2 headers in your project.
   - Link against the SDL2 libraries.
   - Ensure the SDL2 DLLs are in your system's PATH or the executable folder.

For full setup help, refer to [Lazy Foo's SDL2 Tutorial](https://lazyfoo.net/tutorials/SDL/).

## 🧑‍💻 How to Run

1. **Clone the Repository**:
   
   ```bash
   git clone https://github.com/YogeshT22/Sort-Algorithm-in-Cpp-Using-SDL2.git
   cd Sort-Algorithm-in-Cpp-Using-SDL2
3. **Build the Project:**:
   Open the .cpp file in an IDE like Visual Studio and link SDL2 properly.
   Or compile via terminal (Linux/macOS or Windows with MinGW):
   
   ```bash
   g++ -std=c++11 -o SortVisualizer "Sort Algorithm in C++ Using SDL2.cpp" -lSDL2
4. **Run the Executable**:

   ```bash
   ./SortVisualizer
🎮 Controls
Start Sorting: Press the designated key (defined in code) to begin.

Pause/Resume: Toggle the visualization on/off.

Reset: Restart with a new random array.

Note: Modify key bindings directly in the code if needed.

📄 License
This project is licensed under the MIT License. See the LICENSE file for details.

🙋‍♂️ Author
Yogesh T
