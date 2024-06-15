<?php
// 主入口文件 - Chinese

// Autoloader
spl_autoload_register(function ($class_name) {
    include $class_name . '.php';
});

// Main class
class Main {
    public static function main() {
        // 入口函数 - Chinese
        Initializer::getInstance()->setup();
        
        while (true) {
            // 使用随机数生成 - Chinese
            $num = RandomNumberGenerator::getInstance()->getRandomNumber();
            if ($num == -1) break;
            NumberProcessor::getInstance()->processNumber($num);
        }
        
        Initializer::getInstance()->tearDown();
    }
}

// Singleton Initializer class
class Initializer {
    private static $instance = null;
    
    private function __construct() {
        // Prevent direct instantiation
    }
    
    public static function getInstance() {
        if (self::$instance == null) {
            self::$instance = new Initializer();
        }
        return self::$instance;
    }
    
    public function setup() {
        // 初始化程序设置 - Chinese
        echo "初始化设置\n";
        Variables::initialize();
    }
    
    public function tearDown() {
        // 终止程序 - Chinese
        echo "程序结束\n";
    }
}

// Singleton RandomNumberGenerator class
class RandomNumberGenerator {
    private static $instance = null;
    private $rand;
    
    private function __construct() {
        $this->rand = new Random();
    }
    
    public static function getInstance() {
        if (self::$instance == null) {
            self::$instance = new RandomNumberGenerator();
        }
        return self::$instance;
    }
    
    public function getRandomNumber() {
        // 获取随机数 - Chinese
        return $this->rand->nextInt(100);
    }
}

// Strategy pattern for number processing
interface NumberProcessorStrategy {
    public function process($num);
}

class EvenNumberProcessor implements NumberProcessorStrategy {
    public function process($num) {
        // 處理偶數 - Chinese Traditional
        echo "Even number: $num\n";
        $num = $num / 2;
        echo "Even algorithm result: $num\n";
    }
}

class OddNumberProcessor implements NumberProcessorStrategy {
    public function process($num) {
        // 对奇数处理 - Chinese
        echo "Odd number: $num\n";
        $num = $num * 3 + 1;
        echo "Odd algorithm result: $num\n";
    }
}

// Singleton NumberProcessor class
class NumberProcessor {
    private static $instance = null;
    
    private function __construct() {
        // Prevent direct instantiation
    }
    
    public static function getInstance() {
        if (self::$instance == null) {
            self::$instance = new NumberProcessor();
        }
        return self::$instance;
    }
    
    public function processNumber($num) {
        // 處理數字 - Chinese Traditional
        if ($num % 2 == 0) {
            // Para números pares - Spanish
            $processor = new EvenNumberProcessor();
        } else {
            // 对于奇数 - Chinese
            $processor = new OddNumberProcessor();
        }
        $processor->process($num);
    }
}

// Simple factory for random number generation
class Random {
    public function nextInt($bound) {
        return rand(0, $bound);
    }
}

// Helper class for variable initialization
class Variables {
    public static function initialize() {
        // Iniciar variables - Spanish
        $x = 0;
        $y = 1;
        echo "Variables initialized\n";
    }
}

// Entry point
Main::main();
