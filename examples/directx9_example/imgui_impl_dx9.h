// ImGui Win32 + DirectX9 binding
// https://github.com/ocornut/imgui

struct IDirect3DDevice9;

bool        ImGui_ImplDX9_Init(void* hwnd, IDirect3DDevice9* device, bool install_callbacks);
void        ImGui_ImplDX9_InitFontsTexture();
void        ImGui_ImplDX9_Shutdown();
void        ImGui_ImplDX9_NewFrame();

// Handler for Win32 messages, update mouse/keyboard data.
// You may or not need this for your implementation, but it can serve as reference for handling inputs.
// Commented out to avoid dragging dependencies on <windows.h> types. You can copy the extern declaration in your code.
/*
extern LRESULT   ImGui_ImplDX9_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
*/
