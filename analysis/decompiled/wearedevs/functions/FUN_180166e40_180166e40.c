/* FUN_180166e40 @ 180166e40 */

void FUN_180166e40(undefined8 *param_1)

{
  bool bVar1;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  byte local_18;
  
  LOCK();
  bVar1 = *(char *)(param_1 + 1) == '\0';
  if (bVar1) {
    *(char *)(param_1 + 1) = '\x01';
  }
  UNLOCK();
  if (!bVar1) {
    FUN_180200390(param_1 + 1);
  }
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = FUN_180200a50();
    local_18 = local_18 ^ 1;
  }
  local_30 = *param_1;
  local_28 = param_1;
  local_20 = param_1 + 1;
  FUN_180165680(&local_30);
  return;
}


