/* FUN_1800a68e0 @ 1800a68e0 */

void FUN_1800a68e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_148 [256];
  longlong local_48;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  FUN_18009c180(local_148,uVar1,uVar2);
  if (1 < local_48 - 3U) {
    do {
      FUN_180177220(uVar3);
      if (1 < local_48 - 3U) {
        FUN_1800a5ed0(local_148);
      }
      FUN_18009c180(local_148,uVar1,uVar2);
    } while (1 < local_48 - 3U);
  }
  return;
}


