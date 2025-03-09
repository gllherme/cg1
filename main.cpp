#include <iostream>
#include <string>
#include <cmath>
#include "./include/CGI.h"

int main (int, char**) {

    Image* texturaCeu = new Image("./assets/ceu.jpg");
    Image* texturaGrama = new Image("./assets/grass.jpg");
    Image* texturaMarmoreLiso = new Image("./assets/marble.jpg");
    Image* texturaOuro = new Image("./assets/gold.jpg");
    Image* texturaMarmorePreto = new Image("./assets/black_marble.jpg");
    
    PlanWithTexture* grama = new PlanWithTexture(texturaGrama, new Vector(0, -10, 0), new Vector(0, 1, 0), 1);

    MeshWithTexture* goldenIdol = Octahedron::createWithTexture(texturaOuro, 1);
    goldenIdol->applyScale(100, 100, 100);
    goldenIdol->applyRotateX(-0.7853982);
    goldenIdol->applyRotateZ(0.7853982);
    goldenIdol->applyTranslate(30, 700, -370);
    goldenIdol->setWrapper(new Cylinder(new Vector(30, 700, -370), new Vector(0, 1, 0), 100, 150));
    
    Mesh* idolBase = Cube::createWithTexture(new Vector(0, 0, 0), 1, texturaMarmorePreto, 1);
    idolBase->applyScale(120, 100, 120);
    idolBase->applyTranslate(0, 600, -400);
    idolBase->setWrapper(new Cylinder(new Vector(0, 600, -400), new Vector(0, 1, 0), 100, 150));

    Mesh* idolLightBase = Cube::createWithTexture(new Vector(0, 0, 0), 1, texturaMarmorePreto, 1);
    idolLightBase->applyScale(120, 300, 120);
    idolLightBase->applyTranslate(0, 900, -400);
    idolLightBase->setWrapper(new Cylinder(new Vector(0, 900, -400), new Vector(0, 1, 0), 500, 150));

    MeshWithTexture* basePanteon = Cube::createWithTexture(new Vector(0, 0, 0), 1, texturaMarmoreLiso, 0.3);
    basePanteon->applyScale(1000, 100, 2000);
    basePanteon->applyTranslate(0, 500, 0);
    basePanteon->setWrapper(new Cylinder(new Vector(0, 500, 0), new Vector(0, 1, 0), 100, 3000));

    MeshWithTexture* degrau1 = Cube::createWithTexture(new Vector(0, 0, 0), 1, texturaMarmoreLiso, 0.3);
    degrau1->applyScale(1000, 100, 2500);
    degrau1->applyTranslate(0, 0, 250);
    degrau1->setWrapper(new Cylinder(new Vector(0, 0, 250), new Vector(0, 1, 0), 100, 2693));

    MeshWithTexture* degrau2 = Cube::createWithTexture(new Vector(0, 0, 0), 1, texturaMarmoreLiso, 0.3);
    degrau2->applyScale(1000, 100, 2400);
    degrau2->applyTranslate(0, 100, 200);
    degrau2->setWrapper(new Cylinder(new Vector(0, 100, 0), new Vector(0, 1, 0), 100, 3000));

    MeshWithTexture* degrau3 = Cube::createWithTexture(new Vector(0, 0, 0), 1, texturaMarmoreLiso, 0.3);
    degrau3->applyScale(1000, 100, 2300);
    degrau3->applyTranslate(0, 200, 150);
    degrau3->setWrapper(new Cylinder(new Vector(0, 200, 0), new Vector(0, 1, 0), 100, 3000));

    MeshWithTexture* degrau4 = Cube::createWithTexture(new Vector(0, 0, 0), 1, texturaMarmoreLiso, 0.3);
    degrau4->applyScale(1000, 100, 2200);
    degrau4->applyTranslate(0, 300, 100);
    degrau4->setWrapper(new Cylinder(new Vector(0, 300, 0), new Vector(0, 1, 0), 100, 3000));

    MeshWithTexture* degrau5 = Cube::createWithTexture(new Vector(0, 0, 0), 1, texturaMarmoreLiso, 0.3);
    degrau5->applyScale(1000, 100, 2100);
    degrau5->applyTranslate(0, 400, 50);
    degrau5->setWrapper(new Cylinder(new Vector(0, 400, 0), new Vector(0, 1, 0), 100, 3000));

    Mesh* tetoPanteon = Prism::createWithTexture(texturaMarmoreLiso, 0.3);
    tetoPanteon->applyRotateX(-1.570796);
    tetoPanteon->applyRotateZ(2.356194);
    tetoPanteon->applyScale(700, 200, -2000);
    tetoPanteon->applyTranslate(-500, 1200, -1000);
    tetoPanteon->setWrapper(new Cylinder(new Vector(0, 1200, 0), new Vector(0, 1, 0), 200, 2000));

    Vector* pilarReflectivity = new Vector(1, 1, 1);
    int pilarRadius = 60;
    int pilarHeight = 600;

    Cylinder* pilarFundoPanteon1 = new Cylinder(new Vector(-350, 600, -800), new Vector(0, 1, 0), pilarHeight, pilarRadius, new Vector(1, 1, 1), 1);
    Cylinder* pilarFundoPanteon2 = new Cylinder(new Vector(0, 600, -800), new Vector(0, 1, 0), pilarHeight, pilarRadius, new Vector(1, 1, 1), 1);
    Cylinder* pilarFundoPanteon3 = new Cylinder(new Vector(350, 600, -800), new Vector(0, 1, 0), pilarHeight, pilarRadius, new Vector(1, 1, 1), 1);

    Cylinder* pilarEsquerdaPanteon1 = new Cylinder(new Vector(-350, 600, -500), new Vector(0, 1, 0), pilarHeight, pilarRadius, pilarReflectivity, 1);
    Cylinder* pilarEsquerdaPanteon2 = new Cylinder(new Vector(-350, 600, -200), new Vector(0, 1, 0), pilarHeight, pilarRadius, new Vector(1, 1, 1), 1);
    Cylinder* pilarEsquerdaPanteon3 = new Cylinder(new Vector(-350, 600, 100), new Vector(0, 1, 0), pilarHeight, pilarRadius, new Vector(1, 1, 1), 1);
    Cylinder* pilarEsquerdaPanteon4 = new Cylinder(new Vector(-350, 600, 400), new Vector(0, 1, 0), pilarHeight, pilarRadius, new Vector(1, 1, 1), 1);
    Cylinder* pilarEsquerdaPanteon5 = new Cylinder(new Vector(-350, 600, 700), new Vector(0, 1, 0), pilarHeight, pilarRadius, new Vector(1, 1, 1), 1);

    Cylinder* posteEsquerdo = new Cylinder(new Vector(-500, 0, 1800), new Vector(0, 1, 0), 300, 20, new Vector(1, 1, 1), 1);
    Sphere* lampadaPosteEsquerdo = new Sphere(40, new Vector(0.7, 0.7, 0), new Vector(-500, 300, 1800));

    Cylinder* posteDireito = new Cylinder(new Vector(500, 0, 1800), new Vector(0, 1, 0), 300, 20, new Vector(1, 1, 1), 1);
    Sphere* lampadaPosteDireito= new Sphere(40, new Vector(0.7, 0.7, 0), new Vector(500, 300, 1800));

    Cylinder* pilarDiretaPanteon1 = new Cylinder(new Vector(350, 600, -500), new Vector(0, 1, 0), pilarHeight, pilarRadius, pilarReflectivity, 1);
    Cylinder* pilarDiretaPanteon2 = new Cylinder(new Vector(350, 600, -200), new Vector(0, 1, 0), pilarHeight, pilarRadius, new Vector(1, 1, 1), 1);
    Cylinder* pilarDiretaPanteon3 = new Cylinder(new Vector(350, 600, 100), new Vector(0, 1, 0), pilarHeight, pilarRadius, new Vector(1, 1, 1), 1);
    Cylinder* pilarDiretaPanteon4 = new Cylinder(new Vector(350, 600, 400), new Vector(0, 1, 0), pilarHeight, pilarRadius, new Vector(1, 1, 1), 1);
    Cylinder* pilarDiretaPanteon5 = new Cylinder(new Vector(350, 600, 700), new Vector(0, 1, 0), pilarHeight, pilarRadius, new Vector(1, 1, 1), 1);

    Cone* montanha1 = new Cone(new Vector(8000, 0, -8000), new Vector(0, 1, 0), 4000, 2000, new Vector(0.15, 0.15, 0.15), 1);
    Cone* montanha2 = new Cone(new Vector(7000, 0, -9000), new Vector(0, 1, 0), 3000, 1500, new Vector(0.15, 0.15, 0.15), 1);
    Cone* montanha3 = new Cone(new Vector(9000, 0, -7000), new Vector(0, 1, 0), 3500, 1800, new Vector(0.15, 0.15, 0.15), 1);

    Light* luzPosteEsquerdo = new PointLight(
        new Vector(0.7, 0.7, 0.7),
        new Vector(-500, 310, 1800)
    );
    Light* luzPosteDireito = new PointLight(
        new Vector(0.7, 0.7, 0.7),
        new Vector(500, 310, 1800)
    );
    Light* sun = new DirectionalLight(
        new Vector(0.3, 0.3, 0.3),
        new Vector(1, -1, 1)
    );

    Light* idolLight = new SpotLight(
        new Vector(0.9, 0.9, 0.9), 
        new Vector(0, -1, 0), 
        new Vector(0, 900, -400), M_PI / 6
    );

    Sp<Scene> scene = new Scene(
        60.0, 60.0,
        400, 400,
        50,
        new Color (100, 100, 100, 255)
    );

    scene->setEnvironmentLight(new Vector (0.3, 0.3, 0.3));

    scene->addObject(grama);

    scene->addObject(goldenIdol);
    scene->addObject(idolBase);
    scene->addObject(idolLightBase);
    
    scene->addObject(basePanteon);
    
    scene->addObject(pilarFundoPanteon1);
    scene->addObject(pilarFundoPanteon2);
    scene->addObject(pilarFundoPanteon3);
    
    scene->addObject(pilarEsquerdaPanteon1);
    scene->addObject(pilarEsquerdaPanteon2);
    scene->addObject(pilarEsquerdaPanteon3);
    scene->addObject(pilarEsquerdaPanteon4);
    scene->addObject(pilarEsquerdaPanteon5);

    scene->addObject(pilarDiretaPanteon1);
    scene->addObject(pilarDiretaPanteon2);
    scene->addObject(pilarDiretaPanteon3);
    scene->addObject(pilarDiretaPanteon4);
    scene->addObject(pilarDiretaPanteon5);

    scene->addObject(tetoPanteon);

    scene->addObject(posteEsquerdo);
    scene->addObject(lampadaPosteEsquerdo);
    scene->addObject(posteDireito);
    scene->addObject(lampadaPosteDireito);

    scene->addObject(degrau1);
    scene->addObject(degrau2);
    scene->addObject(degrau3);
    scene->addObject(degrau4);
    scene->addObject(degrau5);

    scene->addObject(montanha1);
    scene->addObject(montanha2);
    scene->addObject(montanha3);

    scene->addLightSource(sun);
    scene->addLightSource(idolLight);
    scene->addLightSource(luzPosteEsquerdo);
    scene->addLightSource(luzPosteDireito);

    scene->setBackgroundImage(texturaCeu);
    scene->lookAt(
        new Vector(-2500, 1000, 2500),
        new Vector(0, 500, 400),
        new Vector(0, 1000, 400)
    );

    scene->render();

    return 0;
}
