/* FUN_1801ca210 @ 1801ca210 */

char * FUN_1801ca210(void *param_1,void **param_2,char *param_3)

{
  void **ppvVar1;
  int iVar2;
  void *_Dst;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  void **_Size;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_f0 [32];
  char *local_d0 [2];
  longlong local_c0;
  void *local_b0;
  void **local_a8;
  void **local_a0;
  undefined1 *local_98;
  char **local_90;
  char *local_88;
  char *local_80;
  undefined8 local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  longlong local_58;
  char *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_b0 = param_1;
  local_a8 = param_2;
  if (*param_3 == '\0') {
    local_50 = param_3;
    FUN_1801c9e50(param_3);
    *local_50 = '\x05';
    local_50[8] = '\0';
    local_50[9] = '\0';
    local_50[10] = '\0';
    local_50[0xb] = '\0';
    local_50[0xc] = '\0';
    local_50[0xd] = '\0';
    local_50[0xe] = '\0';
    local_50[0xf] = '\0';
    local_50[0x18] = '\0';
    local_50[0x19] = '\0';
    local_50[0x1a] = '\0';
    local_50[0x1b] = '\0';
    local_50[0x1c] = '\0';
    local_50[0x1d] = '\0';
    local_50[0x1e] = '\0';
    local_50[0x1f] = '\0';
    param_3 = local_50;
  }
  else if (*param_3 != '\x05') {
    local_a0 = &local_b0;
    local_98 = &LAB_1800a54a0;
    local_90 = local_d0;
    local_88 = &LAB_1801caa60;
    local_d0[0] = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180288a38,&local_a0,&PTR_s_C__Users_burne__cargo_registry_s_180288ac8);
  }
  pcVar3 = param_3 + 8;
  if ((longlong)param_2 < 0) {
    uVar7 = 0;
LAB_1801ca28b:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar7,param_2);
  }
  if (param_2 == (void **)0x0) {
    _Dst = (void *)0x1;
  }
  else {
    FUN_180027490();
    uVar7 = 1;
    _Dst = (void *)thunk_FUN_1801d32d0(param_2,1);
    if (_Dst == (void *)0x0) goto LAB_1801ca28b;
  }
  memcpy(_Dst,param_1,(size_t)param_2);
  pcVar4 = *(char **)pcVar3;
  local_60 = pcVar3;
  if (pcVar4 == (char *)0x0) {
    local_80 = (char *)0x0;
LAB_1801ca3d1:
    local_f0[0] = 0;
    local_88 = local_60;
    local_78 = 0;
    local_a0 = param_2;
    local_98 = _Dst;
    local_90 = param_2;
    local_70 = param_3;
    FUN_1801ca8c0(local_d0,&local_a0,local_f0);
    return local_d0[0] + local_c0 * 0x20;
  }
  local_58 = *(longlong *)(param_3 + 0x10);
  do {
    local_68 = (char *)(ulonglong)*(ushort *)(pcVar4 + 0x272);
    lVar8 = (ulonglong)((uint)*(ushort *)(pcVar4 + 0x272) * 8) * 3;
    lVar6 = 0x20;
    param_3 = (char *)0xffffffffffffffff;
    pcVar3 = pcVar4 + 0x168;
    local_50 = pcVar4;
    do {
      if (lVar8 == 0) {
        param_3 = local_68;
        goto LAB_1801ca384;
      }
      ppvVar1 = *(void ***)(pcVar3 + 0x10);
      _Size = ppvVar1;
      if (param_2 < ppvVar1) {
        _Size = param_2;
      }
      iVar2 = memcmp(_Dst,*(void **)(pcVar3 + 8),(size_t)_Size);
      pcVar4 = local_50;
      lVar5 = (longlong)param_2 - (longlong)ppvVar1;
      if (iVar2 != 0) {
        lVar5 = (longlong)iVar2;
      }
      lVar8 = lVar8 + -0x18;
      lVar6 = lVar6 + -0x20;
      param_3 = param_3 + 1;
      pcVar3 = pcVar3 + 0x18;
    } while ((char)((0 < lVar5) - (lVar5 < 0)) == '\x01');
    if (0 < lVar5 == lVar5 < 0) {
      if (param_2 != (void **)0x0) {
        thunk_FUN_1801d3330(_Dst,param_2,1);
      }
      local_f0[0] = 0;
      FUN_1801c9e50(local_f0);
      return pcVar4 + -lVar6;
    }
LAB_1801ca384:
    local_80 = local_50;
    if (local_58 == 0) goto LAB_1801ca3d1;
    pcVar4 = *(char **)(local_50 + (longlong)param_3 * 8 + 0x278);
    local_58 = local_58 + -1;
  } while( true );
}


