/* FUN_18007df40 @ 18007df40 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_18007df40(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  byte local_55;
  uint local_54;
  uint *local_50;
  code *local_48;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = *param_1;
    uVar3 = *param_2;
    lVar4 = param_2[1];
    lVar7 = 0;
    do {
      local_55 = *(byte *)(lVar2 + lVar7);
      uVar6 = (uint)local_55;
      switch(local_55) {
      case 0:
        cVar5 = (**(code **)(lVar4 + 0x18))(uVar3,&DAT_18020cfd5,2);
        break;
      case 9:
        cVar5 = (**(code **)(lVar4 + 0x18))(uVar3,"\\t",2);
        break;
      case 10:
        cVar5 = (**(code **)(lVar4 + 0x18))(uVar3,"\\n",2);
        break;
      case 0xd:
        cVar5 = (**(code **)(lVar4 + 0x18))(uVar3,"\\r",2);
        break;
      case 0x22:
switchD_18007dfd3_caseD_22:
        local_50 = &local_54;
        local_48 = FUN_1801edd10;
        local_54 = uVar6;
        cVar5 = FUN_1801ef150(uVar3,lVar4,&DAT_18020cfd7,&local_50);
        break;
      default:
        if (uVar6 == 0x5c) goto switchD_18007dfd3_caseD_22;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
        if ((byte)(local_55 - 0x20) < 0x5f) {
          local_50 = &local_54;
          local_48 = FUN_1801edd10;
          local_54 = uVar6;
          cVar5 = FUN_1801ef150(uVar3,lVar4,&DAT_18020cfd3,&local_50);
        }
        else {
          local_50 = (uint *)&local_55;
          local_48 = FUN_1801ee990;
          cVar5 = FUN_1801ef150(uVar3,lVar4,&DAT_18020cfc8,&local_50);
        }
      }
      if (cVar5 != '\0') {
        return 1;
      }
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
  }
  return 0;
}


