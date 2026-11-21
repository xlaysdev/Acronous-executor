/* FUN_1801cb310 @ 1801cb310 */

void FUN_1801cb310(longlong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar5 = param_1[1];
  uVar2 = param_1[2];
  if (uVar2 != uVar5) {
    if (uVar5 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar2,uVar5,&PTR_s_C__Users_burne__cargo_registry_s_180288fc8);
    }
    bVar1 = *(byte *)(*param_1 + uVar2);
    if (((bVar1 != 0x22) && (bVar1 != 0x5c)) && (0x1f < bVar1)) {
      uVar5 = uVar5 - (uVar2 + 1);
      lVar6 = 7 - uVar2;
      lVar4 = 1;
      do {
        if (lVar4 - (uVar5 & 0x7ffffffffffffff8) == 1) {
          param_1[2] = (uVar5 & 0xfffffffffffffff8) + uVar2 + 1;
          FUN_1801ff650();
          return;
        }
        uVar7 = *(ulonglong *)(*param_1 + uVar2 + lVar4);
        lVar4 = lVar4 + 8;
        lVar6 = lVar6 + -8;
        uVar7 = ((uVar7 ^ 0x5c5c5c5c5c5c5c5c) + 0xfefefefefefefeff |
                (uVar7 ^ 0x2222222222222222) + 0xfefefefefefefeff | uVar7 + 0xdfdfdfdfdfdfdfe0) &
                ~uVar7 & 0x8080808080808080;
      } while (uVar7 == 0);
      uVar3 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
        uVar3 = uVar3 + 1;
      }
      param_1[2] = (ulonglong)(uVar3 >> 3) - lVar6;
    }
  }
  return;
}


