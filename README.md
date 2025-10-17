# Anime Engine Scratch

A sleek Qt-based application for creating floating GIF animations on your desktop. Perfect for ambient animations, stream overlays, or desktop enhancements!

## ✨ Features

- 🪟 Frameless, floating window design
- 🔝 Always-on-top functionality
- 🌫️ Transparent background support
- 🎬 Smooth GIF playback
- 🎯 Center-aligned animations
- 🖱️ Draggable window interface

## 🚀 Quick Start

### Building (Linux)

1. Configure and build:
```bash
mkdir build && cd build
cmake ..
```

2. Run the application:
```bash
cmake --build .
```

### Example
```bash
./anime-engine-scratch clip4
```


## Preview

<video src="./resources/preview.mp4" autoplay muted loop controls width="100%">
  Your browser does not support the video tag.
</video>

## 💡 Usage Tips

- Place your GIF files in the `utils/` directory
- GIF filenames should be specified without the `.gif` extension
- Click and drag anywhere on the window to reposition it
- The window stays on top of other applications
- Background is automatically made transparent

## 🛠️ Technical Details

Built with:
- Qt Framework for the GUI
- CMake build system
- C++ for core functionality

The application creates a frameless Qt window with:
- Transparent background (`Qt::WA_TranslucentBackground`)
- Always-on-top behavior (`Qt::WindowStaysOnTopHint`)
- Centered content layout
- Mouse event pass-through for dragging

## 📂 Project Structure

```
anime-engine-scratch/
├── main.cpp          # Core application logic
├── CMakeLists.txt    # Build configuration
├── utils/            # GIF storage directory
└── build/           # Build output
```

## 🤝 Contributing

Contributions are welcome! Feel free to:
- Submit bug reports
- Propose new features
- Create pull requests
