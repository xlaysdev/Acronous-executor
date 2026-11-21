/* FUN_18008f890 @ 18008f890 */

void FUN_18008f890(void *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_100 [224];
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_2;
  FUN_1801ade10(local_100);
  memcpy(param_1,local_100,0xe0);
  uVar1 = local_20[1];
  uVar2 = local_20[2];
  uVar3 = local_20[3];
  *(undefined8 *)((longlong)param_1 + 0xe0) = *local_20;
  *(undefined8 *)((longlong)param_1 + 0xe8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xf0) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0xf8) = uVar3;
  return;
}


