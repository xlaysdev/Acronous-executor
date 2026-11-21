/* FUN_1801eae2b @ 1801eae2b */

undefined8 FUN_1801eae2b(int *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int **local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  int *local_20;
  
  if (*param_1 == 1) {
    local_20 = param_1 + 2;
    local_38 = 0;
    local_30 = 1000000;
    local_48 = &local_20;
    if ((*(uint *)(param_2 + 0x10) >> 0x17 & 1) == 0) {
      puVar3 = &DAT_1802927d5;
    }
    else {
      puVar3 = &DAT_180292808;
    }
    local_40 = &LAB_1801eaa4b;
    local_28 = param_2;
    cVar1 = FUN_1801ef150(&local_38,&DAT_1802927d8,puVar3);
    if ((int)local_38 == 1) {
      if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("`fmt::Error` from `SizeLimitedFmtAdapter` was discarded",0x37,&local_48,
                      &DAT_180292740,&DAT_180292860);
      }
      cVar1 = FUN_1801f0c50(param_2,"{size limit reached}",0x14);
    }
    if (cVar1 != '\0') {
      return 1;
    }
  }
  else {
    cVar1 = FUN_1801f0c50(param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FUN_1801f0c50(param_2,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe));
  return uVar2;
}


