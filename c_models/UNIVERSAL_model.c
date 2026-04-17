// UNIVERSAL ML MODEL FOR ALL SENSORS
// OUTPUT: 1.0 = Good (Normal), 0.0 = Bad (Noise/Anomaly)

#include <string.h>
void score(double * input, double * output) {
    double var0[2];
    if (input[0] <= 0.009542772080749273) {
        if (input[0] <= 0.0000007545131381903047) {
            if (input[1] <= 0.000009317217063653516) {
                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[1] <= 0.00008453972986899316) {
                    if (input[0] <= 0.00000005329859575908813) {
                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[1] <= 0.00002238295928691514) {
                            if (input[1] <= 0.000010063883109978633) {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[0] <= 0.0000004214505509025912) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[1] <= 0.000018296683720109286) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.00006213876076799352) {
                                if (input[0] <= 0.00000029711432603107824) {
                                    if (input[1] <= 0.00004515907676250208) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 0.00006984838546486571) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= 0.0000002782377990229179) {
                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 0.005893047200515866) {
                if (input[1] <= 0.00013738514826400205) {
                    if (input[0] <= 0.00009120655158767477) {
                        if (input[0] <= 0.000008143419108819216) {
                            if (input[1] <= 0.000023994249204406515) {
                                if (input[1] <= 0.000021476477741089184) {
                                    if (input[0] <= 0.000006522184776258655) {
                                        if (input[0] <= 0.0000010515675796796131) {
                                            memcpy(var0, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.000020620570467144717) {
                                            memcpy(var0, (double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.000004577538334160636) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.000005516821602213895) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.6, 0.4}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.00004947647175868042) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[1] <= 0.00006467103594332002) {
                                        if (input[0] <= 0.000005671079861713224) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.42857142857142855, 0.5714285714285714}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.00013634366041515023) {
                                if (input[0] <= 0.00006569378820131533) {
                                    if (input[1] <= 0.0000441142292402219) {
                                        if (input[0] <= 0.00002465080251567997) {
                                            memcpy(var0, (double[]){0.07563025210084033, 0.9243697478991597}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.010869565217391304, 0.9891304347826086}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.000085026265878696) {
                                            memcpy(var0, (double[]){0.13496932515337423, 0.8650306748466258}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.014492753623188406, 0.9855072463768116}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.00012982614134671167) {
                                        if (input[1] <= 0.00009303051047027111) {
                                            memcpy(var0, (double[]){0.2682926829268293, 0.7317073170731707}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[1] <= 0.000056513006711611524) {
                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[0] <= 0.00009854004019871354) {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[0] <= 0.00017081101395888254) {
                                    if (input[1] <= 0.00011583202649489976) {
                                        if (input[0] <= 0.0001363303090329282) {
                                            memcpy(var0, (double[]){0.64, 0.36}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 0.00011821270891232416) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[1] <= 0.00012604248695424758) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= 0.000027163061531609856) {
                        if (input[1] <= 0.0012915568659082055) {
                            if (input[0] <= 0.000026904200240096543) {
                                if (input[1] <= 0.00033721466024871916) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[1] <= 0.00041678389243315905) {
                                        if (input[0] <= 0.0000012033398490984837) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= 0.0008737891621422023) {
                            if (input[0] <= 0.00012352431076578796) {
                                if (input[0] <= 0.000123306417663116) {
                                    if (input[1] <= 0.0012252911692485213) {
                                        if (input[1] <= 0.00020400661742314696) {
                                            memcpy(var0, (double[]){0.10989010989010989, 0.8901098901098901}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.033816425120772944, 0.966183574879227}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.0018237996264360845) {
                                            memcpy(var0, (double[]){0.4444444444444444, 0.5555555555555556}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 0.0003192270960425958) {
                                    if (input[0] <= 0.00018106634524883702) {
                                        if (input[0] <= 0.00017996106907958165) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 0.00031963278888724744) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.00030710255668964237) {
                                            memcpy(var0, (double[]){0.028688524590163935, 0.9713114754098361}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0562015503875969, 0.9437984496124031}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.0008780509815551341) {
                                if (input[1] <= 0.0010470147244632244) {
                                    if (input[1] <= 0.0009142221824731678) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 0.0042942536529153585) {
                                    if (input[0] <= 0.0010108386049978435) {
                                        if (input[0] <= 0.0009690502483863384) {
                                            memcpy(var0, (double[]){0.038461538461538464, 0.9615384615384616}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.2777777777777778, 0.7222222222222222}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.0009428198973182589) {
                                            memcpy(var0, (double[]){0.2727272727272727, 0.7272727272727273}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.06293706293706294, 0.9370629370629371}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.004402786726132035) {
                                        if (input[0] <= 0.00438761617988348) {
                                            memcpy(var0, (double[]){0.2, 0.8}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.004051993601024151) {
                                            memcpy(var0, (double[]){0.029411764705882353, 0.9705882352941176}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.16363636363636364, 0.8363636363636363}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[0] <= 0.0007769407820887864) {
                    if (input[0] <= 0.000016640849025861826) {
                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[0] <= 0.00005837028402311262) {
                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[0] <= 0.00012604767107404768) {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[0] <= 0.00020281469187466428) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[0] <= 0.00034335898817516863) {
                                        if (input[0] <= 0.00023724784841760993) {
                                            memcpy(var0, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= 0.0004056805482832715) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[1] <= 0.00598889822140336) {
                        if (input[0] <= 0.005685645854100585) {
                            if (input[1] <= 0.005977903259918094) {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= 0.007871258538216352) {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 0.005950643215328455) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 0.007546336622908711) {
                            if (input[0] <= 0.008012593723833561) {
                                if (input[0] <= 0.0032053545583039522) {
                                    if (input[0] <= 0.0031508358661085367) {
                                        if (input[0] <= 0.001693817670457065) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.15789473684210525, 0.8421052631578947}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 0.006444482831284404) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[1] <= 0.0071510979905724525) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.015853247605264187) {
                                if (input[1] <= 0.007610253058373928) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[1] <= 0.01319385040551424) {
                                        if (input[0] <= 0.0024923058226704597) {
                                            memcpy(var0, (double[]){0.125, 0.875}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.272, 0.728}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.01346752094104886) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.2894736842105263, 0.7105263157894737}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.03396184928715229) {
                                    if (input[0] <= 0.0017583005246706307) {
                                        if (input[1] <= 0.016126422211527824) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.025123771280050278) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.14285714285714285, 0.8571428571428571}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.2521260380744934) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[0] <= 0.01615456584841013) {
            if (input[1] <= 0.012345532886683941) {
                if (input[1] <= 0.006821891060099006) {
                    if (input[0] <= 0.01374079193919897) {
                        if (input[1] <= 0.005523181753233075) {
                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[1] <= 0.00653070816770196) {
                                if (input[1] <= 0.00605022138915956) {
                                    if (input[1] <= 0.005706797586753964) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 0.008735661394894123) {
                        if (input[0] <= 0.011892051436007023) {
                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= 0.010845876298844814) {
                            if (input[0] <= 0.010571636259555817) {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[1] <= 0.013262022752314806) {
                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[0] <= 0.014505014754831791) {
                        if (input[0] <= 0.010436908807605505) {
                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[1] <= 0.017154525965452194) {
                                if (input[1] <= 0.015874674543738365) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[1] <= 0.016467489302158356) {
                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[0] <= 0.15874341130256653) {
                if (input[1] <= 0.10959220677614212) {
                    if (input[0] <= 0.030504933558404446) {
                        if (input[1] <= 0.024288439191877842) {
                            if (input[1] <= 0.010646474547684193) {
                                if (input[1] <= 0.010006033815443516) {
                                    if (input[0] <= 0.0261320723220706) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 0.021550687961280346) {
                                    if (input[1] <= 0.013073486275970936) {
                                        if (input[1] <= 0.012928890064358711) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= 0.018802963197231293) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.043524736538529396) {
                                if (input[0] <= 0.02259459998458624) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[0] <= 0.02857984509319067) {
                                        if (input[1] <= 0.03807350434362888) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[1] <= 0.017157637514173985) {
                            if (input[1] <= 0.016558741219341755) {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[0] <= 0.12500041723251343) {
                        if (input[1] <= 0.22234156727790833) {
                            if (input[1] <= 0.12508900836110115) {
                                if (input[1] <= 0.11832565441727638) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 0.2916565537452698) {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[0] <= 0.1011839248239994) {
                                    if (input[1] <= 0.3016691505908966) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[1] <= 0.3534468412399292) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.15851814299821854) {
                            if (input[0] <= 0.15234167873859406) {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[0] <= 0.153463214635849) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[1] <= 0.47346311807632446) {
                    if (input[0] <= 0.38833022117614746) {
                        if (input[0] <= 0.38742052018642426) {
                            if (input[0] <= 0.22328180819749832) {
                                if (input[0] <= 0.17396698147058487) {
                                    if (input[0] <= 0.17384494841098785) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 0.2234790399670601) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[1] <= 0.15179429948329926) {
                                        if (input[1] <= 0.14730937778949738) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.19225233793258667) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.9775561097256857, 0.022443890274314215}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[1] <= 0.4474639743566513) {
                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[1] <= 0.44893990457057953) {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[0] <= 0.4504847973585129) {
                        if (input[1] <= 0.5577981173992157) {
                            if (input[1] <= 0.48839855194091797) {
                                if (input[1] <= 0.48641543090343475) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 0.31119315326213837) {
                                    if (input[0] <= 0.2921610623598099) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[0] <= 0.2218114361166954) {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 0.6243009269237518) {
                                    if (input[1] <= 0.560059517621994) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= 0.26360970735549927) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[1] <= 1.1151282787322998) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 0.4737475514411926) {
                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[0] <= 13.791709423065186) {
                                if (input[0] <= 13.295556545257568) {
                                    if (input[1] <= 10.962768077850342) {
                                        if (input[0] <= 2.8194607496261597) {
                                            memcpy(var0, (double[]){0.9433962264150944, 0.05660377358490566}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 12.939290046691895) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
