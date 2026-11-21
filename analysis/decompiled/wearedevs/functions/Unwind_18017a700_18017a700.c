/* Unwind@18017a700 @ 18017a700 */

void Unwind_18017a700(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x80) == 0) {
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x60);
    *(undefined1 *)(param_2 + 0x97) = 1;
    *(char *)(param_2 + 0x96) = (char)*(undefined8 *)(param_2 + 0x88);
    *(undefined1 *)(param_2 + 0x95) = 1;
    return;
  }
  if ((*(byte *)(param_2 + 0x94) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x60);
    *(undefined1 *)(param_2 + 0x97) = 1;
    *(char *)(param_2 + 0x96) = (char)*(undefined8 *)(param_2 + 0x88);
    *(undefined1 *)(param_2 + 0x95) = 1;
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0x80) + 0x18))(*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x60);
  *(undefined1 *)(param_2 + 0x97) = 1;
  *(char *)(param_2 + 0x96) = (char)*(undefined8 *)(param_2 + 0x88);
  *(undefined1 *)(param_2 + 0x95) = 1;
  return;
}


