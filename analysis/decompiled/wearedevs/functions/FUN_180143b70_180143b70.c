/* FUN_180143b70 @ 180143b70 */

void FUN_180143b70(undefined8 *param_1,ulonglong *param_2,ulonglong param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined **unaff_RSI;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  undefined1 uVar6;
  
  if (param_3 == 0) {
LAB_180143bdc:
    *(undefined1 *)param_1 = 5;
    *(undefined1 *)(param_1 + 8) = 8;
    return;
  }
  if (0x3d < param_3) {
    if (param_3 - 0x3e < param_2[3]) {
      uVar3 = (param_3 - 0x3e) + param_2[2];
      uVar4 = 0;
      if (*param_2 <= uVar3) {
        uVar4 = *param_2;
      }
      FUN_180146e00(param_1,(uVar3 - uVar4) * 0x48 + param_2[1]);
      return;
    }
    goto LAB_180143bdc;
  }
  puVar1 = &switchD_180143b94::switchdataD_180253c28;
  pcVar2 = (char *)((longlong)&switchD_180143b94::switchdataD_180253c28 +
                   (longlong)(int)(&switchD_180143b94::switchdataD_180253c28)[param_3 - 1]);
  switch(param_3) {
  case 1:
    uVar6 = 2;
    puVar1 = (uint *)0x1;
    unaff_RSI = (undefined **)0x0;
    ppuVar5 = &PTR_LAB_180252548;
    goto LAB_180143fb4;
  case 2:
    puVar1 = (uint *)0x101010101010101;
    goto LAB_180143dd9;
  case 3:
    puVar1 = (uint *)0x202020202020202;
LAB_180143dd9:
    uVar6 = 3;
    unaff_RSI = (undefined **)puVar1;
    ppuVar5 = (undefined **)puVar1;
    goto LAB_180143fb4;
  case 4:
    uVar6 = 5;
    ppuVar5 = &PTR_LAB_180252548;
    puVar1 = (uint *)"/";
    unaff_RSI = (undefined **)0x1;
    goto LAB_180143fb4;
  case 5:
    uVar6 = 5;
    ppuVar5 = &PTR_LAB_180252548;
    puVar1 = (uint *)"/index.html";
    unaff_RSI = (undefined **)0xb;
    goto LAB_180143fb4;
  case 6:
    uVar6 = 4;
    ppuVar5 = &PTR_LAB_180252548;
    puVar1 = (uint *)"http";
    unaff_RSI = (undefined **)0x4;
    goto LAB_180143fb4;
  case 7:
    uVar6 = 4;
    ppuVar5 = &PTR_LAB_180252548;
    puVar1 = (uint *)"https";
    unaff_RSI = (undefined **)0x5;
    goto LAB_180143fb4;
  case 8:
    ppuVar5 = (undefined **)0xc8;
    goto LAB_180143e94;
  case 9:
    ppuVar5 = (undefined **)0xcc;
    goto LAB_180143e94;
  case 10:
    ppuVar5 = (undefined **)0xce;
    goto LAB_180143e94;
  case 0xb:
    ppuVar5 = (undefined **)0x130;
    goto LAB_180143e94;
  case 0xc:
    ppuVar5 = (undefined **)0x190;
    goto LAB_180143e94;
  case 0xd:
    ppuVar5 = (undefined **)0x194;
    goto LAB_180143e94;
  case 0xe:
    ppuVar5 = (undefined **)0x1f4;
LAB_180143e94:
    uVar6 = 7;
    goto LAB_180143fb4;
  case 0xf:
    puVar1 = (uint *)0x1;
    param_4 = 0;
    ppuVar5 = (undefined **)0x0;
    uVar6 = 0;
    pcVar2 = (char *)0x1;
    unaff_RSI = (undefined **)0x0;
    goto LAB_180143fb4;
  case 0x10:
    pcVar2 = 
    "gzip, deflateC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\h2-0.4.18\\src\\hpack\\decoder.rs"
    ;
    puVar1 = (uint *)0x2;
    param_4 = 0xd;
    goto LAB_180143faf;
  case 0x11:
    puVar1 = (uint *)0x3;
    break;
  case 0x12:
    puVar1 = (uint *)0x4;
    break;
  case 0x13:
    pcVar2 = (char *)0x1;
    param_4 = 0;
    puVar1 = (uint *)0x0;
    goto LAB_180143faf;
  case 0x14:
    puVar1 = (uint *)0x8;
    break;
  case 0x15:
    puVar1 = (uint *)0xd;
    break;
  case 0x16:
    puVar1 = (uint *)0xe;
    break;
  case 0x17:
    puVar1 = (uint *)0x10;
    break;
  case 0x18:
    puVar1 = (uint *)0x11;
    break;
  case 0x19:
    puVar1 = (uint *)0x15;
    break;
  case 0x1a:
    puVar1 = (uint *)0x16;
    break;
  case 0x1b:
    puVar1 = (uint *)0x17;
    break;
  case 0x1c:
    puVar1 = (uint *)0x18;
    break;
  case 0x1d:
    puVar1 = (uint *)0x19;
    break;
  case 0x1e:
    puVar1 = (uint *)0x1a;
    break;
  case 0x1f:
    puVar1 = (uint *)0x1d;
    break;
  case 0x20:
    puVar1 = (uint *)0x1e;
    break;
  case 0x21:
    puVar1 = (uint *)0x20;
    break;
  case 0x22:
    puVar1 = (uint *)0x21;
    break;
  case 0x23:
    puVar1 = (uint *)0x22;
    break;
  case 0x24:
    puVar1 = (uint *)0x23;
    break;
  case 0x25:
    puVar1 = (uint *)0x25;
    break;
  case 0x26:
    puVar1 = (uint *)0x26;
    break;
  case 0x27:
    puVar1 = (uint *)0x27;
    break;
  case 0x28:
    puVar1 = (uint *)0x28;
    break;
  case 0x29:
    puVar1 = (uint *)0x29;
    break;
  case 0x2a:
    puVar1 = (uint *)0x2a;
    break;
  case 0x2b:
    puVar1 = (uint *)0x2b;
    break;
  case 0x2c:
    puVar1 = (uint *)0x2c;
    break;
  case 0x2d:
    puVar1 = (uint *)0x2d;
    break;
  case 0x2e:
    puVar1 = (uint *)0x2e;
    break;
  case 0x2f:
    puVar1 = (uint *)0x2f;
    break;
  case 0x30:
    puVar1 = (uint *)0x32;
    break;
  case 0x31:
    puVar1 = (uint *)0x33;
    break;
  case 0x32:
    puVar1 = (uint *)0x36;
    break;
  case 0x33:
    puVar1 = (uint *)0x37;
    break;
  case 0x34:
    puVar1 = (uint *)0x39;
    break;
  case 0x35:
    puVar1 = (uint *)0x3a;
    break;
  case 0x36:
    puVar1 = (uint *)0x40;
    break;
  case 0x37:
    puVar1 = (uint *)0x41;
    break;
  case 0x38:
    puVar1 = (uint *)0x42;
    break;
  case 0x39:
    puVar1 = (uint *)0x45;
    break;
  case 0x3a:
    puVar1 = (uint *)0x46;
    break;
  case 0x3b:
    puVar1 = (uint *)0x49;
    break;
  case 0x3c:
    puVar1 = (uint *)0x4a;
    break;
  case 0x3d:
    puVar1 = (uint *)0x4c;
  }
  pcVar2 = (char *)0x1;
  param_4 = 0;
LAB_180143faf:
  ppuVar5 = (undefined **)0x0;
  uVar6 = 0;
  unaff_RSI = (undefined **)0x0;
LAB_180143fb4:
  *param_1 = ppuVar5;
  param_1[1] = puVar1;
  param_1[2] = unaff_RSI;
  param_1[3] = 0;
  param_1[4] = &PTR_LAB_180252548;
  param_1[5] = pcVar2;
  param_1[6] = param_4;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = uVar6;
  return;
}


