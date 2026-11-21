/* FUN_18016e6d0 @ 18016e6d0 */

void FUN_18016e6d0(longlong param_1)

{
  char cVar1;
  longlong local_8;
  
  local_8 = param_1 + -0x80;
  LOCK();
  cVar1 = *(char *)(param_1 + 0x150);
  *(char *)(param_1 + 0x150) = '\x01';
  UNLOCK();
  if (cVar1 == '\0') {
    FUN_18016c1f0(&local_8,&PTR_s_C__Users_burne__cargo_registry_s_180261210);
    return;
  }
  return;
}


