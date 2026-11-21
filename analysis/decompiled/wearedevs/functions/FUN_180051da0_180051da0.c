/* FUN_180051da0 @ 180051da0 */

longlong FUN_180051da0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(char *)((longlong)param_1 + 0x32) == '\x02') {
    uVar2 = param_1[2];
    uVar1 = *(ulonglong *)(*param_1 + 0x28);
    if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar2,uVar1,&PTR_s_C__Users_burne__cargo_registry_s_180208e60);
    }
    lVar4 = *(longlong *)(*param_1 + 0x20) + uVar2 * 0x68 + 0x18;
    (**(code **)(*param_2 + 0x20))(param_2[3],param_2[1],param_2[2]);
  }
  else {
    lVar4 = *param_1;
    plVar3 = param_1 + 1;
    uVar2 = FUN_180054210(lVar4,plVar3,param_2,(short)param_1[6],param_1[5],
                          *(char *)((longlong)param_1 + 0x32),param_2);
    if ((uVar2 & 1) == 0) {
      if (*(longlong **)(lVar4 + 0x28) <= plVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(plVar3,*(longlong **)(lVar4 + 0x28),
                      &PTR_s_C__Users_burne__cargo_registry_s_1802091a8);
      }
      lVar4 = *(longlong *)(lVar4 + 0x20) + (longlong)plVar3 * 0x68 + 0x18;
    }
    else {
      lVar4 = 0;
    }
  }
  return lVar4;
}


