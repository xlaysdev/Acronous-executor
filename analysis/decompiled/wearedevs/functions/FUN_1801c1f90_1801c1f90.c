/* FUN_1801c1f90 @ 1801c1f90 */

void FUN_1801c1f90(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *local_8;
  
  lVar1 = *(longlong *)*param_1;
  if (lVar1 == 0) {
    FUN_1801f0c50(param_2,"GlobalPoolAlreadyInitialized",0x1c);
    return;
  }
  if ((int)lVar1 == 1) {
    FUN_1801f0c50(param_2,"CurrentThreadAlreadyInPool",0x1a);
    return;
  }
  local_8 = (longlong *)*param_1 + 1;
  FUN_1801eff20(param_2,"IOError",7,&local_8,"");
  return;
}


