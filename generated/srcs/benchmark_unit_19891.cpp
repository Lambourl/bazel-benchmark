#include "bench/fib.hpp"

// RE Benchmark TU 19891 of 20000 (depth=28, stamp="default")
namespace bench_tu_19891 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19891>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19891
