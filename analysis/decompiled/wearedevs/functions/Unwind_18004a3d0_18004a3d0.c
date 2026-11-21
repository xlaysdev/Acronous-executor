/* Unwind@18004a3d0 @ 18004a3d0 */

void Unwind_18004a3d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xd78) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0xd98),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0xd78) + 0x10));
  }
  *(char *)(param_2 + 0xd86) = (char)*(undefined4 *)(param_2 + 0xd68);
  *(char *)(param_2 + 0xd85) = (char)*(undefined4 *)(param_2 + 0xdb0);
  *(char *)(param_2 + 0xd84) = (char)*(undefined4 *)(param_2 + 0xd94);
  return;
}


