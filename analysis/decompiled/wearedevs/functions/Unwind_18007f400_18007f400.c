/* Unwind@18007f400 @ 18007f400 */

void Unwind_18007f400(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x40);
  for (lVar1 = *(longlong *)(param_2 + 0x48); lVar1 != 0; lVar1 = lVar1 + -1) {
    FUN_18007a8b0(lVar2);
    lVar2 = lVar2 + 0x60;
  }
  return;
}


