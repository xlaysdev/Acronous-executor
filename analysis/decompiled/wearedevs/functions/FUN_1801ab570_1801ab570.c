/* FUN_1801ab570 @ 1801ab570 */

void FUN_1801ab570(byte *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint *unaff_RDI;
  
  uVar2 = (&switchD_1801ab58e::caseD_d)[*param_1];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    FUN_1801f0c50(param_2,"OPTIONS");
    return;
  case 1:
    pcVar3 = "GET";
    goto LAB_1801ab614;
  case 2:
    pcVar3 = "POST";
    goto LAB_1801ab630;
  case 3:
    pcVar3 = "PUT";
LAB_1801ab614:
    FUN_1801f0c50(param_2,pcVar3,3);
    return;
  case 4:
    FUN_1801f0c50(param_2,"DELETE",6);
    return;
  case 5:
    pcVar3 = "HEAD";
LAB_1801ab630:
    FUN_1801f0c50(param_2,pcVar3,4);
    return;
  case 6:
    pcVar3 = "TRACE";
    break;
  case 7:
    FUN_1801f0c50(param_2,"CONNECT");
    return;
  case 8:
    pcVar3 = "PATCH";
    break;
  case 9:
    pcVar3 = "QUERY";
    break;
  case 10:
    if (0xf < param_1[0x10]) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,param_1[0x10],0xf,&PTR_s_C__Users_burne__cargo_registry_s_180283f48);
    }
    FUN_1801f0c50(param_2,param_1 + 1);
    return;
  case 0xb:
    FUN_1801f0c50(param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    return;
  case 0xc:
                    /* WARNING: Could not recover jumptable at 0x00018028327f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulonglong)*unaff_RDI)();
    return;
  case 0xd:
    uVar1 = in((ushort)param_2 ^ 0xffff);
    *unaff_RDI = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00018028326a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)unaff_RDI + 0x1bfff287))
              ((longlong)&switchD_1801ab58e::caseD_d + (longlong)(int)uVar2,param_2 & 0xffffffff,7);
    return;
  }
  FUN_1801f0c50(param_2,pcVar3,5);
  return;
}


