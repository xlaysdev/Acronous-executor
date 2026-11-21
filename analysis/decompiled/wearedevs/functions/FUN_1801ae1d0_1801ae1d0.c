/* FUN_1801ae1d0 @ 1801ae1d0 */

void FUN_1801ae1d0(undefined2 *param_1,longlong param_2)

{
  undefined2 local_2;
  
  local_2 = *param_1;
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) != 0) {
    FUN_1801eeae0(&local_2);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x4000000) == 0) {
    FUN_1801ee5a0();
    return;
  }
  FUN_1801eec40();
  return;
}


