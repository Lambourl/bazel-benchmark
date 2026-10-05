#include "bench/fib.hpp"

// RE Benchmark TU 8962 of 20000 (depth=28, stamp="default")
namespace bench_tu_8962 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8962>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8962
