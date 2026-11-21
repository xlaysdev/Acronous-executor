/* FUN_180100c90 @ 180100c90 */

void FUN_180100c90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  FUN_180100900();
  LOCK();
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + lVar1;
  UNLOCK();
  return;
}


