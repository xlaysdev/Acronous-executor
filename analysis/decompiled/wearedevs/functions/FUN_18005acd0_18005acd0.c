/* FUN_18005acd0 @ 18005acd0 */

void FUN_18005acd0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong local_c8 [3];
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar6 = (ulonglong)*(uint *)(param_2 + 0x2c);
  lVar4 = *(longlong *)(param_2 + 8);
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  if (uVar6 != 0) {
    if (uVar6 < uVar1) {
      if (*(char *)(lVar4 + uVar6) < -0x40) {
LAB_18005ad0b:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(lVar4,uVar1,uVar6,uVar1,&DAT_180209788);
      }
    }
    else if (uVar1 != uVar6) goto LAB_18005ad0b;
  }
  if ((2 < uVar1 - uVar6) &&
     (*(char *)(lVar4 + 2 + uVar6) == '/' && *(short *)(lVar4 + uVar6) == 0x2f3a)) {
    lVar4 = param_2;
    lVar3 = FUN_180191810(param_2);
    FUN_1801aaa60(&local_68,lVar3,lVar4 + lVar3);
    if (local_68 != -0x7fffffffffffffff) {
      local_a8 = uStack_60;
      uStack_a4 = uStack_5c;
      uStack_a0 = uStack_58;
      uStack_9c = uStack_54;
      local_b0 = local_68;
      plVar5 = &local_b0;
      FUN_1801ed7c0(&local_80,plVar5);
      lVar4 = FUN_180191720(param_2);
      if ((lVar4 == 0) ||
         (FUN_1801aaa60(local_c8,lVar4,(longlong)plVar5 + lVar4), local_c8[0] == -0x7fffffffffffffff
         )) {
        local_98 = -0x8000000000000000;
        if (local_70 != 0) goto LAB_18005ae38;
      }
      else {
        local_68 = local_c8[0];
        FUN_1801ed7c0(&local_98,&local_68);
        if (local_70 != 0 || !SBORROW8(0,local_98)) {
LAB_18005ae38:
          local_30 = local_98;
          cVar2 = FUN_180190e70(param_2,1,0);
          if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("has_authority means set_username shouldn\'t fail",0x2f,&local_68,
                          &DAT_180208e28,&PTR_s_C__Users_burne__cargo_registry_s_180209920);
          }
          cVar2 = FUN_1801908c0(param_2,0);
          if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("has_authority means set_password shouldn\'t fail",0x2f,&local_68,
                          &DAT_180208e28,&PTR_s_C__Users_burne__cargo_registry_s_180209968);
          }
          *param_1 = local_80;
          param_1[1] = lStack_78;
          param_1[4] = lStack_90;
          param_1[5] = local_88;
          param_1[2] = local_70;
          param_1[3] = local_98;
          return;
        }
      }
      if (local_80 != 0) {
        thunk_FUN_1801d3330(lStack_78,local_80,1);
      }
    }
  }
  *param_1 = -0x8000000000000000;
  return;
}


