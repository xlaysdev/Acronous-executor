/* FUN_1801f5dc0 @ 1801f5dc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x0001801f5e89) */
/* WARNING: Removing unreachable block (ram,0x0001801f5e1a) */
/* WARNING: Removing unreachable block (ram,0x0001801f5eca) */

int FUN_1801f5dc0(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) && (DAT_1802fd880 < 1)) {
    return 0;
  }
  if ((param_2 - 1U < 2) && (iVar1 = FUN_1801f5bb0(param_1,param_2,param_3), iVar1 == 0)) {
    return 0;
  }
  iVar1 = DllMain(param_1,param_2,param_3);
  if ((param_2 == 1) && (iVar1 == 0)) {
    DllMain(param_1,0,param_3);
    FUN_1801f5d20(param_3 != 0);
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_1801f5bb0(param_1,param_2,param_3);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


