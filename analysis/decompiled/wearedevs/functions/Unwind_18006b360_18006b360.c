/* Unwind@18006b360 @ 18006b360 */

void Unwind_18006b360(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(short *)(*(longlong *)(param_2 + 0x58) + 0x58) == 3) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x60), lVar1 != 0)) {
    lVar2 = *(longlong *)(param_2 + 0x58);
    (**(code **)(lVar1 + 0x20))
              (*(undefined8 *)(lVar2 + 0x78),*(undefined8 *)(lVar2 + 0x68),
               *(undefined8 *)(lVar2 + 0x70));
  }
  lVar1 = *(longlong *)(param_2 + 0x58);
  FUN_18000a9e0(*(undefined8 *)(lVar1 + 0x80),*(undefined8 *)(lVar1 + 0x88));
  thunk_FUN_1801d3330(lVar1,0x90,8);
  return;
}


