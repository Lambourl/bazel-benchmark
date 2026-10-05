#include "bench/fib.hpp"

// RE Benchmark TU 8948 of 20000 (depth=28, stamp="default")
namespace bench_tu_8948 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8948>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8948
