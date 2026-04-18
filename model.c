// ML MODEL FOR ALL SENSORS
// OUTPUT: 1.0 = Good (Normal), 0.0 = Bad (Noise/Anomaly)

#include <string.h>
void score(double * input, double * output) {
    double var0[2];
    if (input[0] <= 0.014067619573324919) {
        if (input[0] <= 0.0000007627364482232224) {
            if (input[1] <= 0.000009292408776673255) {
                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[1] <= 0.000009878965556708863) {
                    if (input[0] <= 0.00000021890939194690873) {
                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 0.00008453108966932632) {
                        if (input[0] <= 0.0000005100391859969022) {
                            if (input[1] <= 0.000047949062718544155) {
                                if (input[0] <= 0.0000001603337196343091) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[1] <= 0.000027561677597987) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.00000033609499894282635) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.00000007564071324850374) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[1] <= 0.00007637150338268839) {
                                        if (input[1] <= 0.00006068998663977254) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.00003354367527208524) {
                                if (input[1] <= 0.00002349174701521406) {
                                    if (input[1] <= 0.000020934851818310563) {
                                        if (input[1] <= 0.00001684857625150471) {
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
                            } else {
                                if (input[1] <= 0.000056370703532593325) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[1] <= 0.00007644407014595345) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.0000003153010226242259) {
                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[0] <= 0.0000005281607400320354) {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[1] <= 0.005899275653064251) {
                if (input[0] <= 0.000011310758964100387) {
                    if (input[1] <= 0.001101877773180604) {
                        if (input[1] <= 0.00002419545216980623) {
                            if (input[1] <= 0.00002198004676756682) {
                                if (input[1] <= 0.00001001496821118053) {
                                    if (input[1] <= 0.0000086649420154572) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.000006655404831690248) {
                                            memcpy(var0, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.000007028744221315719) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.000007319252517845598) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.05, 0.95}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.000003944274226341804) {
                                    if (input[0] <= 0.0000015933177905935736) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= 0.000005481772632265347) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.0000073638618687255075) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.000010965455658151768) {
                                if (input[1] <= 0.00004862299465457909) {
                                    if (input[0] <= 0.000009570758265908808) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.000009777456398296636) {
                                            memcpy(var0, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.00006342366032185964) {
                                        if (input[1] <= 0.00005909470928600058) {
                                            memcpy(var0, (double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.5555555555555556, 0.4444444444444444}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.00033421388070564717) {
                                            memcpy(var0, (double[]){0.0125, 0.9875}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.2222222222222222, 0.7777777777777778}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.00005560287354455795) {
                                    if (input[1] <= 0.00004357549551059492) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.000009817096724873409) {
                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[1] <= 0.00013332062371773645) {
                        if (input[0] <= 0.00009111628969549201) {
                            if (input[0] <= 0.00006584908987861127) {
                                if (input[0] <= 0.00001704125043033855) {
                                    if (input[0] <= 0.000012262190466572065) {
                                        if (input[0] <= 0.000011899044238816714) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= 0.00001722494107525563) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.00001779802369128447) {
                                            memcpy(var0, (double[]){0.15384615384615385, 0.8461538461538461}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.03260869565217391, 0.967391304347826}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.0000661837802908849) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[1] <= 0.00012706869893008843) {
                                        if (input[1] <= 0.0000912567411432974) {
                                            memcpy(var0, (double[]){0.10465116279069768, 0.8953488372093024}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.0000878841383382678) {
                                if (input[1] <= 0.000056399881941615604) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[0] <= 0.00012540385068859905) {
                                        if (input[0] <= 0.00010659831968951039) {
                                            memcpy(var0, (double[]){0.7272727272727273, 0.2727272727272727}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.2222222222222222, 0.7777777777777778}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= 0.0001392819976899773) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.625, 0.375}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.00013229512114776298) {
                                    if (input[1] <= 0.00012452310329535976) {
                                        if (input[1] <= 0.00009377838796353899) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.35294117647058826, 0.6470588235294118}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= 0.00010147569264518097) {
                                            memcpy(var0, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.004300916334614158) {
                            if (input[0] <= 0.000027020935704058502) {
                                if (input[1] <= 0.0015028946218080819) {
                                    if (input[0] <= 0.000026781118322105613) {
                                        if (input[1] <= 0.00039043091237545013) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.08695652173913043, 0.9130434782608695}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.0005293140129651874) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.000013629703062179033) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.00001809067452995805) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.4444444444444444, 0.5555555555555556}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.0006838672561571002) {
                                    if (input[1] <= 0.00018293975153937936) {
                                        if (input[1] <= 0.00018116686987923458) {
                                            memcpy(var0, (double[]){0.03587443946188341, 0.9641255605381166}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.0003192789445165545) {
                                            memcpy(var0, (double[]){0.00684931506849315, 0.9931506849315068}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.02100840336134454, 0.9789915966386554}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.0000686573184793815) {
                                        if (input[1] <= 0.0006981725164223462) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.12121212121212122, 0.8787878787878788}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.0006850890640635043) {
                                            memcpy(var0, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.030314513073133764, 0.9696854869268663}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.004402724094688892) {
                                if (input[0] <= 0.004389210604131222) {
                                    if (input[0] <= 0.004311840515583754) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 0.010587446857243776) {
                                    if (input[0] <= 0.005154123064130545) {
                                        if (input[1] <= 0.0036714080488309264) {
                                            memcpy(var0, (double[]){0.05263157894736842, 0.9473684210526315}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= 0.005162205547094345) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.06451612903225806, 0.9354838709677419}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.010948868002742529) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[0] <= 0.0005478789680637419) {
                    if (input[0] <= 0.00011162304508616216) {
                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[1] <= 0.00968211842700839) {
                            if (input[1] <= 0.006054567405954003) {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[0] <= 0.00029076555802021176) {
                                    if (input[0] <= 0.00021472765365615487) {
                                        if (input[1] <= 0.006936448393389583) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= 0.0003908696089638397) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.0005006293649785221) {
                                            memcpy(var0, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.00030868989415466785) {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[0] <= 0.00032854067103471607) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= 0.007084397133439779) {
                        if (input[1] <= 0.00877502141520381) {
                            if (input[1] <= 0.005990261910483241) {
                                if (input[0] <= 0.005818251520395279) {
                                    if (input[1] <= 0.005977223627269268) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[1] <= 0.005983775947242975) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 0.004439708078280091) {
                                    if (input[0] <= 0.004432631190866232) {
                                        if (input[0] <= 0.0007797354192007333) {
                                            memcpy(var0, (double[]){0.2, 0.8}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0425531914893617, 0.9574468085106383}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= 0.01615159399807453) {
                                if (input[0] <= 0.0007157231448218226) {
                                    if (input[0] <= 0.0005810315487906337) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 0.008819713722914457) {
                                        if (input[0] <= 0.006056547397747636) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.016047422774136066) {
                                            memcpy(var0, (double[]){0.1522633744855967, 0.8477366255144033}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.0344217624515295) {
                                    if (input[0] <= 0.006493261083960533) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.006529742851853371) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.005944496253505349) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.0066851198207587) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 0.011708713602274656) {
                            if (input[0] <= 0.009440137073397636) {
                                if (input[1] <= 0.005985264666378498) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[0] <= 0.007098727859556675) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.007583878235891461) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.24390243902439024, 0.7560975609756098}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.013249672017991543) {
                                    if (input[1] <= 0.0108060697093606) {
                                        if (input[0] <= 0.012849273160099983) {
                                            memcpy(var0, (double[]){0.5277777777777778, 0.4722222222222222}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 0.011131714098155499) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.007398979039862752) {
                                if (input[0] <= 0.007372764637693763) {
                                    if (input[1] <= 0.015233667101711035) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[1] <= 0.020353084430098534) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 0.020626498386263847) {
                                    if (input[0] <= 0.007866098545491695) {
                                        if (input[1] <= 0.012622618582099676) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.015749000944197178) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.07692307692307693, 0.9230769230769231}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.011005867272615433) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[1] <= 0.0279383547604084) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[0] <= 0.1691862717270851) {
            if (input[1] <= 0.09039030224084854) {
                if (input[0] <= 0.01810840703547001) {
                    if (input[1] <= 0.01774741243571043) {
                        if (input[0] <= 0.018069684505462646) {
                            if (input[0] <= 0.015307224821299314) {
                                if (input[0] <= 0.015168813057243824) {
                                    if (input[1] <= 0.014764110092073679) {
                                        if (input[0] <= 0.014954391401261091) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.016638590954244137) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 0.017146258614957333) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[1] <= 0.012646389193832874) {
                                        if (input[0] <= 0.017785944044589996) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[1] <= 0.04467954486608505) {
                            if (input[0] <= 0.014354750514030457) {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[1] <= 0.04867209866642952) {
                        if (input[0] <= 0.02736862190067768) {
                            if (input[1] <= 0.02145535685122013) {
                                if (input[1] <= 0.013381044380366802) {
                                    if (input[1] <= 0.012976111378520727) {
                                        if (input[1] <= 0.011354505084455013) {
                                            memcpy(var0, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 0.02065783180296421) {
                                        if (input[1] <= 0.014306421857327223) {
                                            memcpy(var0, (double[]){0.8888888888888888, 0.1111111111111111}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.020816562697291374) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.02682618424296379) {
                                    if (input[0] <= 0.02384827472269535) {
                                        if (input[0] <= 0.02191778738051653) {
                                            memcpy(var0, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.028143527917563915) {
                                            memcpy(var0, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= 0.01854831352829933) {
                                if (input[1] <= 0.017990676686167717) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 0.06681248545646667) {
                                    if (input[1] <= 0.022575662471354008) {
                                        if (input[1] <= 0.022495217621326447) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 0.026294519193470478) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.07596143707633018) {
                                            memcpy(var0, (double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.05682833306491375) {
                            if (input[0] <= 0.052250323817133904) {
                                if (input[1] <= 0.06159198470413685) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[0] <= 0.044474758207798004) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= 0.09089210256934166) {
                                if (input[0] <= 0.0892183743417263) {
                                    if (input[0] <= 0.06260174885392189) {
                                        if (input[0] <= 0.060160813853144646) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.05588666349649429) {
                                            memcpy(var0, (double[]){0.8, 0.2}, 2 * sizeof(double));
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
            } else {
                if (input[0] <= 0.12500041723251343) {
                    if (input[1] <= 0.22917483001947403) {
                        if (input[0] <= 0.11806253716349602) {
                            if (input[0] <= 0.07196100428700447) {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[0] <= 0.07522192224860191) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[1] <= 0.1206078790128231) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[1] <= 0.12228266149759293) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.11077837646007538) {
                                if (input[0] <= 0.12351474538445473) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[0] <= 0.025894349440932274) {
                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[0] <= 0.11599097773432732) {
                                if (input[1] <= 0.839446485042572) {
                                    if (input[0] <= 0.10570428147912025) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.1096416637301445) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[1] <= 0.13305188715457916) {
                        if (input[1] <= 0.09942742809653282) {
                            if (input[0] <= 0.128135085105896) {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[1] <= 0.2422603815793991) {
                            if (input[1] <= 0.1514199823141098) {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 0.16714134067296982) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[0] <= 0.1534147933125496) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[1] <= 0.18801544606685638) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.129484124481678) {
                                if (input[0] <= 0.12599248439073563) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[0] <= 0.12722979485988617) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[1] <= 0.42755162715911865) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.14918150752782822) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[0] <= 0.1502835974097252) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[1] <= 0.32258714735507965) {
                                            memcpy(var0, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[1] <= 47450.423828125) {
                if (input[1] <= 0.5316748917102814) {
                    if (input[0] <= 0.3198216110467911) {
                        if (input[0] <= 0.3195192664861679) {
                            if (input[1] <= 0.13374131172895432) {
                                if (input[1] <= 0.13300367444753647) {
                                    if (input[0] <= 0.18626819550991058) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.2112450897693634) {
                                            memcpy(var0, (double[]){0.25, 0.75}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 0.31653326749801636) {
                                    if (input[1] <= 0.3492540866136551) {
                                        if (input[1] <= 0.34845662117004395) {
                                            memcpy(var0, (double[]){0.9386189258312021, 0.061381074168797956}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.4621330201625824) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.9090909090909091, 0.09090909090909091}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.23511027544736862) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.3167651444673538) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[1] <= 0.25515852868556976) {
                            if (input[1] <= 0.25497375428676605) {
                                if (input[1] <= 0.24406784772872925) {
                                    if (input[1] <= 0.24293895065784454) {
                                        if (input[1] <= 0.24078067392110825) {
                                            memcpy(var0, (double[]){0.9736842105263158, 0.02631578947368421}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 0.3516636788845062) {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 0.3517136871814728) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[0] <= 0.4003923684358597) {
                                        if (input[0] <= 0.39956308901309967) {
                                            memcpy(var0, (double[]){0.9795918367346939, 0.02040816326530612}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.357945516705513) {
                                            memcpy(var0, (double[]){0.9629629629629629, 0.037037037037037035}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.9902676399026764, 0.009732360097323601}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= 4.002529621124268) {
                        if (input[1] <= 4.94974160194397) {
                            if (input[0] <= 1.0691164135932922) {
                                if (input[1] <= 0.7997607588768005) {
                                    if (input[0] <= 0.30604930222034454) {
                                        if (input[0] <= 0.19388969987630844) {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.25, 0.75}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= 1.061188519001007) {
                                            memcpy(var0, (double[]){0.890625, 0.109375}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.9505404531955719) {
                                        if (input[1] <= 1.2492327094078064) {
                                            memcpy(var0, (double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.8, 0.2}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[0] <= 3.579939365386963) {
                                    if (input[1] <= 2.563696026802063) {
                                        if (input[1] <= 2.3961005210876465) {
                                            memcpy(var0, (double[]){0.9076923076923077, 0.09230769230769231}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 3.084791421890259) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 3.8403204679489136) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 6.893555641174316) {
                                if (input[0] <= 3.580257773399353) {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[0] <= 20.593144416809082) {
                            if (input[0] <= 20.269075393676758) {
                                if (input[1] <= 15.796867370605469) {
                                    if (input[1] <= 6.279235601425171) {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[1] <= 6.383939266204834) {
                                            memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (double[]){0.967741935483871, 0.03225806451612903}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 12.808849811553955) {
                                        memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 357.83026123046875) {
                                memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[0] <= 440.6829299926758) {
                                    memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                memcpy(var0, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
