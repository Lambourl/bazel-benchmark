#include "bench/fib.hpp"

// RE Benchmark TU 6085 of 20000 (depth=28, stamp="default")
namespace bench_tu_6085 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6085>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6085
