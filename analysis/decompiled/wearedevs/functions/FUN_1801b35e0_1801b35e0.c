/* FUN_1801b35e0 @ 1801b35e0 */

undefined8 *
FUN_1801b35e0(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = *param_2;
  if ((uVar3 & 1) != 0) {
    FUN_1801fc850();
    return param_1;
  }
  LOCK();
  plVar1 = (longlong *)(uVar3 + 0x10);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1801fca10();
  }
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = uVar3;
  *param_1 = &PTR_FUN_180285b78;
  return param_1;
}


