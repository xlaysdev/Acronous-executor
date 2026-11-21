/* FUN_1801f61f0 @ 1801f61f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801f61f0(undefined8 param_1,int param_2,undefined8 param_3,code *param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_1801f6780();
  if ((iVar1 == 0) && (param_2 == 1)) {
    (*param_4)(param_1,0,param_3);
  }
  _seh_filter_dll(param_5,param_6);
  return;
}


