/* FUN_180171b10 @ 180171b10 */

void FUN_180171b10(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  byte local_28;
  
  LOCK();
  bVar3 = *(char *)(param_1 + 1) == '\0';
  if (bVar3) {
    *(char *)(param_1 + 1) = '\x01';
  }
  UNLOCK();
  if (!bVar3) {
    FUN_180200390(param_1 + 1);
  }
  puVar2 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_180200a50();
    local_28 = local_28 ^ 1;
  }
  local_40 = *param_1;
  local_38 = param_1;
  local_30 = param_1 + 1;
  FUN_180165680(&local_40);
  LOCK();
  bVar3 = *(char *)(param_1 + 5) == '\0';
  if (bVar3) {
    *(char *)(param_1 + 5) = '\x01';
  }
  UNLOCK();
  if (!bVar3) {
    FUN_180200390(param_1 + 5);
  }
  if ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_180200a50();
    local_28 = local_28 ^ 1;
  }
  local_40 = param_1[4];
  local_38 = param_1 + 4;
  local_30 = param_1 + 5;
  FUN_180165680(&local_40);
  LOCK();
  bVar3 = *(char *)(param_1 + 9) == '\0';
  if (bVar3) {
    *(char *)(param_1 + 9) = '\x01';
  }
  UNLOCK();
  if (!bVar3) {
    FUN_180200390(param_1 + 9);
  }
  if ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_180200a50();
    local_28 = local_28 ^ 1;
  }
  local_40 = param_1[8];
  local_38 = param_1 + 8;
  local_30 = param_1 + 9;
  FUN_180165680(&local_40);
  LOCK();
  bVar3 = *(char *)(param_1 + 0xd) == '\0';
  if (bVar3) {
    *(char *)(param_1 + 0xd) = '\x01';
  }
  UNLOCK();
  if (!bVar3) {
    FUN_180200390(param_1 + 0xd);
  }
  if ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_180200a50();
    local_28 = local_28 ^ 1;
  }
  local_40 = param_1[0xc];
  local_38 = param_1 + 0xc;
  local_30 = param_1 + 0xd;
  FUN_180165680(&local_40);
  LOCK();
  bVar3 = *(char *)(param_1 + 0x11) == '\0';
  if (bVar3) {
    *(char *)(param_1 + 0x11) = '\x01';
  }
  UNLOCK();
  if (!bVar3) {
    FUN_180200390(param_1 + 0x11);
  }
  if ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_180200a50();
    local_28 = local_28 ^ 1;
  }
  local_40 = param_1[0x10];
  local_38 = param_1 + 0x10;
  local_30 = param_1 + 0x11;
  FUN_180165680(&local_40);
  LOCK();
  bVar3 = *(char *)(param_1 + 0x15) == '\0';
  if (bVar3) {
    *(char *)(param_1 + 0x15) = '\x01';
  }
  UNLOCK();
  if (!bVar3) {
    FUN_180200390(param_1 + 0x15);
  }
  if ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_180200a50();
    local_28 = local_28 ^ 1;
  }
  local_40 = param_1[0x14];
  local_38 = param_1 + 0x14;
  local_30 = param_1 + 0x15;
  FUN_180165680(&local_40);
  LOCK();
  bVar3 = *(char *)(param_1 + 0x19) == '\0';
  if (bVar3) {
    *(char *)(param_1 + 0x19) = '\x01';
  }
  UNLOCK();
  if (!bVar3) {
    FUN_180200390(param_1 + 0x19);
  }
  if ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_180200a50();
    local_28 = local_28 ^ 1;
  }
  local_40 = param_1[0x18];
  local_38 = param_1 + 0x18;
  local_30 = param_1 + 0x19;
  FUN_180165680(&local_40);
  LOCK();
  bVar3 = *(char *)(param_1 + 0x1d) == '\0';
  if (bVar3) {
    *(char *)(param_1 + 0x1d) = '\x01';
  }
  UNLOCK();
  if (bVar3) {
    uVar1 = *(ulonglong *)puVar2;
  }
  else {
    FUN_180200390(param_1 + 0x1d);
    uVar1 = *(ulonglong *)puVar2;
  }
  if ((uVar1 & 0x7fffffffffffffff) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_180200a50();
    local_28 = local_28 ^ 1;
  }
  local_38 = param_1 + 0x1c;
  local_40 = param_1[0x1c];
  local_30 = param_1 + 0x1d;
  FUN_180165680(&local_40);
  return;
}


