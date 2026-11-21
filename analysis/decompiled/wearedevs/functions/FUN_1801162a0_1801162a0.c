/* FUN_1801162a0 @ 1801162a0 */

void FUN_1801162a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  LOCK();
  plVar1 = (longlong *)(lVar3 + 0x10);
  lVar2 = *plVar1;
  *plVar1 = 0;
  UNLOCK();
  if (lVar2 == 0) {
    return;
  }
  FUN_180162080(lVar3 + 0x18);
  return;
}


