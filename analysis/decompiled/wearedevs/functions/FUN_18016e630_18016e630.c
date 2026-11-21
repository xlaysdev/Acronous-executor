/* FUN_18016e630 @ 18016e630 */

void FUN_18016e630(longlong param_1)

{
  char cVar1;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = (longlong *)(param_1 + -0x80);
  LOCK();
  cVar1 = *(char *)(param_1 + 0x150);
  *(char *)(param_1 + 0x150) = '\x01';
  UNLOCK();
  if (cVar1 == '\0') {
    FUN_18016c1f0(&local_18,&PTR_s_C__Users_burne__cargo_registry_s_180261210);
  }
  LOCK();
  *local_18 = *local_18 + -1;
  UNLOCK();
  if (*local_18 == 0) {
    FUN_1801635e0(&local_18);
  }
  return;
}


