#include "bench/fib.hpp"

// RE Benchmark TU 18044 of 20000 (depth=28, stamp="default")
namespace bench_tu_18044 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18044>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18044
