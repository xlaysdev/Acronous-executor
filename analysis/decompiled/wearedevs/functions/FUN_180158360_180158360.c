/* FUN_180158360 @ 180158360 */

void FUN_180158360(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong local_210;
  longlong local_208;
  undefined8 local_200;
  ulonglong local_1f8;
  undefined8 local_1f0;
  byte local_1e8;
  int local_128 [58];
  
  FUN_18014a500(local_128,param_2 + 0x18,param_1);
  if (local_128[0] != 4) {
    uVar2 = *(ulonglong *)(param_4 + 0x58);
    uVar1 = *(ulonglong *)(param_4 + 0x60);
    uVar3 = 0;
    do {
      memcpy(&local_210,local_128,0xe8);
      if (local_210 == 1) {
        if ((local_1e8 & local_1f8 < 0x100) != 0) {
          uVar5 = uVar2 + (0x100 - local_1f8);
          if (CARRY8(uVar2,0x100 - local_1f8)) {
            uVar5 = 0xffffffffffffffff;
          }
          uVar2 = uVar1;
          if (uVar5 <= uVar1) {
            uVar2 = uVar5;
          }
          *(ulonglong *)(param_4 + 0x58) = uVar2;
        }
        uVar4 = uVar3 + (uint)local_1f8;
        if (CARRY4(uVar3,(uint)local_1f8)) {
          uVar4 = 0xffffffff;
        }
        uVar3 = uVar4;
        if (*(uint *)(param_2 + 0x134) < uVar4) {
          uVar3 = *(uint *)(param_2 + 0x134);
        }
        (**(code **)(local_208 + 0x20))(local_1f0,local_200);
      }
      else if ((local_210 == 0) || ((int)local_210 != 2)) {
        FUN_18015b980(&local_208);
      }
      else {
        FUN_1800430f0(&local_208);
      }
      FUN_18014a500(local_128,param_2 + 0x18,param_1);
    } while (local_128[0] != 4);
    if (uVar3 != 0) {
      *(int *)(param_2 + 0x134) = *(int *)(param_2 + 0x134) - uVar3;
      FUN_180159c70(param_1,uVar3,param_3);
      return;
    }
  }
  return;
}


