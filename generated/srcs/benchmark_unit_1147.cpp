#include "bench/fib.hpp"

// RE Benchmark TU 1147 of 20000 (depth=28, stamp="default")
namespace bench_tu_1147 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1147>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1147
