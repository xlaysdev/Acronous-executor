/* FUN_1801b3ac0 @ 1801b3ac0 */

undefined8 FUN_1801b3ac0(undefined8 param_1,void *param_2,size_t param_3)

{
  size_t local_30;
  void *local_28;
  size_t local_20;
  
  if (param_3 == 0) {
    local_28 = (void *)0x1;
  }
  else {
    FUN_180027490();
    local_28 = (void *)thunk_FUN_1801d32d0(param_3,1);
    if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,param_3);
    }
  }
  local_30 = param_3;
  memcpy(local_28,param_2,param_3);
  local_20 = param_3;
  FUN_1801b3d40(param_1,&local_30);
  return param_1;
}


