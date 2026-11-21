/* Unwind@18015e3d0 @ 18015e3d0 */

void Unwind_18015e3d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x40);
  for (lVar1 = *(longlong *)(param_2 + 0x48); lVar1 != 0; lVar1 = lVar1 + -1) {
    FUN_18015dc20(lVar2);
    lVar2 = lVar2 + 0x48;
  }
  return;
}


