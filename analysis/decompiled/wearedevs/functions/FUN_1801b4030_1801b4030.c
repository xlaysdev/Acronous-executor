/* FUN_1801b4030 @ 1801b4030 */

longlong FUN_1801b4030(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar1 = 0;
  LOCK();
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    param_1[2] = 1;
  }
  else {
    lVar1 = lVar2;
  }
  UNLOCK();
  if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0001801b409b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2[1]);
    return lVar2;
  }
  if (lVar1 == 0) {
    if ((((undefined8 *)*param_1 == (undefined8 *)0x0) ||
        ((undefined8 *)*param_1 != (undefined8 *)*param_2)) || (param_1[1] != param_2[1])) {
      lVar2 = (**(code **)*param_2)();
      if (*param_1 != 0) {
        (**(code **)(*param_1 + 0x18))();
      }
      *param_1 = lVar2;
      param_1[1] = (longlong)param_2;
      lVar1 = 1;
      LOCK();
      lVar2 = param_1[2];
      bVar3 = lVar2 == 1;
      if (bVar3) {
        param_1[2] = 0;
      }
      else {
        lVar1 = lVar2;
      }
      UNLOCK();
    }
    else {
      lVar1 = 1;
      LOCK();
      lVar2 = param_1[2];
      bVar3 = lVar2 == 1;
      if (bVar3) {
        param_1[2] = 0;
      }
      else {
        lVar1 = lVar2;
      }
      UNLOCK();
    }
    if (!bVar3) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180285f40);
      }
      LOCK();
      lVar1 = param_1[2];
      param_1[2] = 0;
      UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001801b4105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)(lVar2 + 8))(param_1[1],lVar1);
      return lVar2;
    }
  }
  return lVar1;
}


