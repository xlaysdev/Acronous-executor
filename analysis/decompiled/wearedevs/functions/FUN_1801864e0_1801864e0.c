/* FUN_1801864e0 @ 1801864e0 */

void FUN_1801864e0(undefined2 *param_1,char *param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  
  if (*param_2 == '\x01') {
    uVar1 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 8) = uVar1;
    uVar2 = *(ushort *)(param_2 + 0x1c);
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x36) = 0;
    *(undefined8 *)(param_1 + 0x3a) = 0;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    *(undefined8 *)(param_1 + 0x32) = 0;
    *(undefined8 *)(param_1 + 0x26) = 0;
    *(undefined8 *)(param_1 + 0x2a) = 0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    *(undefined4 *)(param_1 + 0x3e) = 0;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    uVar3 = 0x1c;
    uVar5 = 0x17;
  }
  else {
    uVar2 = *(ushort *)(param_2 + 6) << 8 | *(ushort *)(param_2 + 6) >> 8;
    uVar4 = *(undefined4 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    uVar3 = 0x10;
    uVar5 = 2;
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  return;
}


