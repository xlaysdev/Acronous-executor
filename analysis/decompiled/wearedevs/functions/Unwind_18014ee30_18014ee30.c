/* Unwind@18014ee30 @ 18014ee30 */

void Unwind_18014ee30(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 1000),0x20,8);
  if (*(longlong *)(param_2 + 0x460) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x460) + 0x20))
              (*(undefined8 *)(param_2 + 0x458),*(undefined8 *)(param_2 + 0x468),
               *(undefined8 *)(param_2 + 0x450));
  }
  *(char *)(param_2 + 0x4b1) = (char)*(undefined4 *)(param_2 + 0x48c);
  *(undefined1 *)(param_2 + 0x4b0) = 1;
  *(char *)(param_2 + 0x4af) = (char)*(undefined4 *)(param_2 + 0x4a4);
  *(char *)(param_2 + 0x4ae) = (char)*(undefined4 *)(param_2 + 0x3f0);
  *(char *)(param_2 + 0x4ad) = (char)*(undefined4 *)(param_2 + 0x490);
  *(undefined1 *)(param_2 + 0x4ac) = 1;
  *(undefined1 *)(param_2 + 0x4ab) = 0;
  return;
}


