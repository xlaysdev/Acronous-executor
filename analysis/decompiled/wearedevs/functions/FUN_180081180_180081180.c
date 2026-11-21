/* FUN_180081180 @ 180081180 */

ulonglong FUN_180081180(int *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 unaff_RSI;
  undefined7 uVar3;
  ulonglong uVar2;
  byte local_60 [8];
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar2 = CONCAT71(uVar3,2);
  if ((char)param_1[0x162] == '\0') {
    if (*param_1 == 2) {
      FUN_1800b88b0(local_60,param_1 + 2);
    }
    else {
      FUN_18007f190(local_60,param_1,param_2);
    }
    if (local_60[0] != 6) {
      uVar1 = (uint)local_60[0];
      *(undefined1 *)(param_1 + 0x162) = 1;
      if (local_60[0] == 5) {
        uVar2 = 0;
      }
      else {
        uVar2 = CONCAT71(uVar3,1);
        if ((1 < uVar1 - 2) && (uVar1 != 0)) {
          if (uVar1 == 1) {
            (**(code **)(local_58 + 0x20))(local_40,local_50,local_48);
          }
          else if (((uint)local_58 & 3) == 1) {
            local_38 = local_58 + -1;
            local_30 = *(undefined8 *)(local_58 + -1);
            local_28 = *(undefined8 **)(local_58 + 7);
            if ((code *)*local_28 != (code *)0x0) {
              (*(code *)*local_28)(local_30);
            }
            if (local_28[1] != 0) {
              thunk_FUN_1801d3330(local_30,local_28[1],local_28[2]);
            }
            thunk_FUN_1801d3330(local_38,0x18,8);
          }
        }
      }
    }
  }
  return uVar2 & 0xffffffff;
}


