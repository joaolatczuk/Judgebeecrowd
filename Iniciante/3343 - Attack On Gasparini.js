var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n");

// Leitura da quantidade de titãs e altura da muralha
var n_titans_and_wall_h = lines[0].split(" ");
var n_titans = parseInt(n_titans_and_wall_h[0]);
var wall_height = parseInt(n_titans_and_wall_h[1]);

// Leitura das alturas dos titãs P, M e G
var titans_heights = lines[2].split(" ");
var p_titan = parseInt(titans_heights[0]);
var m_titan = parseInt(titans_heights[1]);
var g_titan = parseInt(titans_heights[2]);

// Leitura da lista de titãs
var titans_list = lines[1].split("");

// Inicialização das variáveis
var starts = [0, 0, 0];
var pos_starts = 0;
var jumps = 0;
var new_h_titan = 0;
var walls = [wall_height];
var n_walls = 1;
var colision = false;

// Processamento dos titãs
for (let control = 0; control < n_titans; control++) {
    switch (titans_list[control]) {
        case "P":
            pos_starts = 0;
            new_h_titan = p_titan;
            break;
        case "M":
            pos_starts = 1;
            new_h_titan = m_titan;
            if (starts[0] > starts[1]) {
                starts[1] = starts[0];
            }
            break;
        case "G":
            pos_starts = 2;
            new_h_titan = g_titan;
            if (starts[1] > starts[2]) {
                starts[2] = starts[1];
            }
            if (starts[0] > starts[2]) {
                starts[2] = starts[0];
            }
            break;
        default:
            break;
    }

    colision = false;
    jumps = starts[pos_starts];

    while (!colision) {
        if (walls[jumps] >= new_h_titan) {
            walls[jumps] -= new_h_titan;
            colision = true;
            starts[pos_starts] = jumps;
        } else {
            jumps++;
            if (walls[jumps] === undefined) {
                walls[jumps] = wall_height;
                n_walls++;
            }
        }
    }
}

// Impressão do resultado
console.log(n_walls);