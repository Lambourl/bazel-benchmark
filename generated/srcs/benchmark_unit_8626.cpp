#include "bench/fib.hpp"

// RE Benchmark TU 8626 of 20000 (depth=28, stamp="default")
namespace bench_tu_8626 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8626>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8626
