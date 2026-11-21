/* FUN_180168410 @ 180168410 */

void FUN_180168410(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180263c37,0x43,&PTR_s_C__Users_burne__cargo_registry_s_180261228,param_4,
                  param_1,0xfffffffffffffffe);
  }
  if (*(longlong *)(param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261240);
  }
  param_1[4] = -1;
  param_1[5] = -1;
  lVar2 = *(longlong *)(param_1 + 6);
  param_1[6] = 0;
  param_1[7] = 0;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    LOCK();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) = lVar2;
    UNLOCK();
    if (lVar1 != 0) {
      FUN_180168500();
    }
    FUN_180166ec0(*(undefined8 *)(param_1 + 0x10),0);
    lVar2 = *(longlong *)(param_1 + 4) + 1;
  }
  *(longlong *)(param_1 + 4) = lVar2;
  FUN_180167ef0(param_1);
  return;
}


