/* Unwind@180052fc0 @ 180052fc0 */

void Unwind_180052fc0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_2 + 0xfd) == '\0') {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0xb0) + 0x20);
    *(undefined1 *)(param_2 + 0xff) = 0;
    *(undefined1 *)(param_2 + 0xfe) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0xe0),*(undefined8 *)(param_2 + 0xd8),
              *(undefined8 *)(param_2 + 0xd0));
  }
  *(undefined1 *)(param_2 + 0xff) = 0;
  *(undefined1 *)(param_2 + 0xfe) = 0;
  return;
}


