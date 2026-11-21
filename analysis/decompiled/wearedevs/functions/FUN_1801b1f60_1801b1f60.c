/* FUN_1801b1f60 @ 1801b1f60 */

undefined8 *
FUN_1801b1f60(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  LOCK();
  plVar1 = (longlong *)(lVar3 + 0x20);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1801fca10();
  }
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = lVar3;
  *param_1 = &PTR_FUN_180285ad8;
  return param_1;
}


