#ifndef __KEYMAP_H__
#define __KEYMAP_H__

//#define nil 0X00
//232-65535 E8-FFFF Reserved  accoeding to HID Usage Tables 1/21/2005 Version 1.12.but i use 0XF1 0XF2 0XF3 0XF4 0XF5 0XF6 0XF7 0XF8
//undefined in HID Usage Tables 1/21/2005 Version 1.12 start
#define KB_CTRL 0XF1
#define KB_SHIFT 0XF2
#define KB_ALT 0XF3
#define KB_GUI 0XF4
#define KB_CTRL_R 0XF5
#define KB_SHIFT_R 0XF6
#define KB_ALT_R 0XF7
#define KB_GUI_R 0XF8
//undefined in HID Usage Tables 1/21/2005 Version 1.12  end 

#define KB_ERROR 0x01
#define KB_A 0x04
#define KB_B 0x05
#define KB_C 0x06
#define KB_D 0x07
#define KB_E 0x08
#define KB_F 0x09
#define KB_G 0x0A
#define KB_H 0x0B
#define KB_I 0x0C
#define KB_J 0x0D
#define KB_K 0x0E
#define KB_L 0x0F
#define KB_M 0x10
#define KB_N 0x11
#define KB_O 0x12
#define KB_P 0x13
#define KB_Q 0x14
#define KB_R 0x15
#define KB_S 0x16
#define KB_T 0x17
#define KB_U 0x18
#define KB_V 0x19
#define KB_W 0x1A
#define KB_X 0x1B
#define KB_Y 0x1C
#define KB_Z 0x1D
#define KB_1 0x1E
#define KB_2 0x1F
#define KB_3 0x20
#define KB_4 0x21
#define KB_5 0x22
#define KB_6 0x23
#define KB_7 0x24
#define KB_8 0x25
#define KB_9 0x26
#define KB_0 0x27
#define KB_ENTER 0x28
#define KB_ESC 0x29
#define KB_BACKSPACE 0x2A
#define KB_TAB 0x2B
#define KB_SPACE 0x2C
#define KB_MIUS 0x2D //-_
#define KB_EQUAL 0x2E //=+
#define KB_LSQUBRACKET 0x2F //[{
#define KB_RSQUBRACKET 0x30 //]}
#define KB_BACKSLASH 0x31 //|
#define KB_SEMICOLON 0x33 //;:
#define KB_APOSTROPHE 0x34 //'"
#define KB_TILDE 0x35 //`~
#define KB_COMMA 0x36 //,<
#define KB_FULLSTOP 0x37 //.>
#define KB_SLASH 0x38 ///?
#define KB_CAPSLOCK 0x39
#define KB_F1 0x3A
#define KB_F2 0x3B
#define KB_F3 0x3C
#define KB_F4 0x3D
#define KB_F5 0x3E
#define KB_F6 0x3F
#define KB_F7 0x40
#define KB_F8 0x41
#define KB_F9 0x42
#define KB_F10 0x43
#define KB_F11 0x44
#define KB_F12 0x45
#define KB_PRTSCR 0x46
#define KB_SCOLLLOCK 0x47
#define KB_PAUSE 0x48
#define KB_INSERT 0x49
#define KB_HOME 0x4A
#define KB_PAGEUP 0x4B
#define KB_DELETE 0x4C
#define KB_END 0x4D
#define KB_PAGEDOWN 0x4E
#define KB_RARROW 0x4F
#define KB_LARROW 0x50
#define KB_DARROW 0x51
#define KB_UARROW 0x52
#define KB_NUMLOCK 0x53
#define KB_PAD_DIV 0x54 ///
#define KB_PAD_MUL 0x55 //*
#define KB_PAD_MINUS 0x56 //-
#define KB_PAD_PLUS 0x57 //+
#define KB_PAD_ENTER 0x58
#define KB_PAD_1 0x59
#define KB_PAD_2 0x5A
#define KB_PAD_3 0x5B
#define KB_PAD_4 0x5C
#define KB_PAD_5 0x5D
#define KB_PAD_6 0x5E
#define KB_PAD_7 0x5F
#define KB_PAD_8 0x60
#define KB_PAD_9 0x61
#define KB_PAD_0 0x62
#define KB_PAD_DEL 0x63
#define KB_APPLICATION 0x65 //RWin�ұ߼�

#endif // __KEYMAP_H__