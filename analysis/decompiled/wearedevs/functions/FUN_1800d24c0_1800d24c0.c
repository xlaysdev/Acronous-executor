/* FUN_1800d24c0 @ 1800d24c0 */

void * FUN_1800d24c0(char *param_1,void *param_2)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 local_158;
  char *local_150;
  undefined8 local_148;
  undefined4 local_38;
  void *local_30;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if ((*param_1 != '\0') && (4 < *(ulonglong *)PTR_DAT_1802fd518)) {
    local_158 = 5;
    local_150 = "reqwest::connect::verbose";
    local_148 = 0x19;
    local_21 = 1;
    local_30 = param_2;
    cVar1 = FUN_1801905f0(&local_22,&local_158);
    param_2 = local_30;
    if (cVar1 != '\0') {
      local_21 = 1;
      uVar2 = FUN_180050ac0(&PTR_FUN_18020d1f0);
      memcpy(&local_158,local_30,0x120);
      local_38 = uVar2;
      FUN_180027490();
      pvVar3 = (void *)thunk_FUN_1801d32d0(0x128,8);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x128);
      }
      memcpy(pvVar3,&local_158,0x128);
      return pvVar3;
    }
  }
  memcpy(&local_158,param_2,0x120);
  FUN_180027490();
  pvVar3 = (void *)thunk_FUN_1801d32d0(0x120,8);
  if (pvVar3 == (void *)0x0) {
    local_30 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x120);
  }
  memcpy(pvVar3,param_2,0x120);
  return pvVar3;
}


