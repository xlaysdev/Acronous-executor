/* FUN_180118db0 @ 180118db0 */

void FUN_180118db0(ulonglong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulonglong *local_80;
  ulonglong *local_78;
  undefined *local_70;
  ulonglong *local_68;
  undefined *local_60;
  ulonglong *local_58;
  undefined *local_50;
  ulonglong *local_48;
  undefined **local_40;
  ulonglong *local_38;
  undefined *local_30;
  ulonglong *local_28;
  undefined *local_20;
  ulonglong **local_18;
  undefined *local_10;
  
  lVar1 = 1;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if (lVar1 == 0) {
    puVar4 = &DAT_180240608;
    pcVar2 = "Length";
    uVar3 = 6;
  }
  else {
    if (lVar1 == 1) {
      local_78 = param_1 + 0xb;
      local_68 = param_1 + 4;
      local_58 = param_1 + 5;
      local_48 = param_1 + 6;
      local_38 = param_1 + 10;
      local_80 = param_1 + 2;
      local_70 = &DAT_180240630;
      local_60 = &DAT_180240650;
      local_50 = &DAT_180240650;
      local_40 = &PTR_LAB_180240670;
      local_30 = &DAT_180240690;
      local_20 = &DAT_1802406b0;
      local_18 = &local_80;
      local_10 = &DAT_1802406d0;
      local_28 = param_1;
      FUN_1801f0700(param_2,"Chunked",7,&PTR_s_statechunk_lenextensions_cnttrai_180240748,7,
                    &local_78,7);
      return;
    }
    puVar4 = &DAT_1802407c0;
    pcVar2 = "EofStartSizeSizeLwsExtensionSizeLfBodyBodyCrBodyLfTrailerTrailerLfEndCrEndLfEnd";
    uVar3 = 3;
  }
  local_78 = param_1 + 1;
  FUN_1801eff20(param_2,pcVar2,uVar3,&local_78,puVar4);
  return;
}


